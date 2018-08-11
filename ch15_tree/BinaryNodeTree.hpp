//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_BINARYNODETREE_HPP
#define PROJECT_BINARYNODETREE_HPP

#include "binarytreeinterface.hpp"
#include "BinaryNode.hpp"
#include "common/common.hpp"

/**Derive link-based binary trees (just normal binary tree, not binary search tree) from BinaryTreeInterface
 * which specifies the public methods for the ADT binary tree*/
template<typename T>
class BinaryNodeTree : public BinaryTreeInterface<T> {
private:
    BinaryNode<T> *rootPtr;

    /** These methods require pointers as arguments. As such, they should not be public and available to client of the
     * class. After all, clients should not have access to node pointers*/
protected:
    int getHeightHelper(BinaryNode<T> *subTreePtr) const;

    int getNumberOfNodesHelper(BinaryNode<T> *subTreePtr) const;

    // recursively deletes all nodes from the tree
    void destroyTree(BinaryNode<T> *subTreePtr);

    // Recursively adds a new node to the tree in a left/right fashion to keep the tree balanced.
    BinaryNode<T> *balancedAdd(BinaryNode<T> *subTreePtr, BinaryNode<T> *newNodePtr);

    // Removes the target value from the tree by calling moveValuesUpTree to overwrite value with value from child.
    BinaryNode<T> *removeValue(BinaryNode<T> *subTreePtr, const T target, bool &success);

    // Copies values up the tree to overwrite value in current node until a leaf is reached; the leaf is then removed,
    // since its value is stored in the parent
    BinaryNode<T> *moveValueUpTree(BinaryNode<T> *subTreePtr);

    // Recursively searches for target value in the tree by using a preorder traversal
    BinaryNode<T> *findNode(BinaryNode<T> *treePtr, const T &target, bool &success) const;

    // Copies the tree rooted at treePtr and returns a pointer to the copy
    BinaryNode<T> *copyTree(const BinaryNode<T> *treePtr) const;

    // Recursive traversal helper methods:
    void preorder(void visit(T &), BinaryNode<T> *treePtr) const;

    void inorder(void visit(T &), BinaryNode<T> *treePtr) const;

    void postorder(void visit(T &), BinaryNode<T> *treePtr) const;

public:
    /**Constructor and Destructor section*/
    BinaryNodeTree();

    BinaryNodeTree(const T &rootItem);

    BinaryNodeTree(const T &rootItem, const BinaryNodeTree<T> *leftTreePtr, const BinaryNodeTree<T> *rightTreePtr);

    BinaryNodeTree(const BinaryNodeTree<T> &tree);

    virtual ~BinaryNodeTree();

    /**public methods*/
    bool isEmpty() const;

    int getHeight() const;

    int getNumberOfNodes() const;

    T getRootData() const throw(PrecondViolateExcep);

    void setRootData(const T &newData);

    bool add(const T &newData);

    bool remove(const T &data);

    void clear();

    T getEntry(const T &anEntry) const throw(TargetNotFoundException);

    bool contains(const T &anEntry) const;

    /**Public Traversals section*/
    void preorderTraverse(void visit(T &)) const;

    void inorderTraverse(void visit(T &)) const;

    void postorderTraverse(void visit(T &)) const;

    /**Overloaded Operator Section*/
    BinaryNodeTree &operator=(const BinaryNodeTree &rightHandSide);
};


/**constructor*/
template<typename T>
BinaryNodeTree<T>::BinaryNodeTree() : rootPtr(nullptr) {}

template<typename T>
BinaryNodeTree<T>::BinaryNodeTree(const T &rootItem) {
    rootPtr = new BinaryNode<T>(rootItem, nullptr, nullptr);
}

template<typename T>
BinaryNodeTree<T>::BinaryNodeTree(const T &rootItem, const BinaryNodeTree<T> *leftTreePtr,
                                  const BinaryNodeTree<T> *rightTreePtr) {
    rootItem = new BinaryNode<T>(rootItem, copyTree(leftTreePtr->rootPtr), copyTree(rightTreePtr->rootPtr));
}

template<typename T>
BinaryNode<T> *BinaryNodeTree<T>::copyTree(const BinaryNode<T> *treePtr) const {
    BinaryNode<T> *newTreePtr = nullptr;

    if (treePtr != nullptr) {
        newTreePtr = new BinaryNode<T>(treePtr->getItem(), nullptr, nullptr);
        newTreePtr->setLeftChildPtr(copyTree((treePtr->getLeftChildPtr())));
        newTreePtr->setRightChildPtr(copyTree(treePtr->getRightChildPtr()));
    }
    return newTreePtr;
}

/**copy constructor*/
template <typename T>
BinaryNodeTree<T>::BinaryNodeTree(const BinaryNodeTree<T> &tree) {
    rootPtr = copyTree(tree.rootPtr);
}

template <typename T>
void BinaryNodeTree<T>::destroyTree(BinaryNode<T> *subTreePtr) {
    if (subTreePtr != nullptr) {
        destroyTree(subTreePtr->getLeftChildPtr());
        destroyTree(subTreePtr->getRightChildPtr());
        delete subTreePtr;
    }
}

template <typename T>
BinaryNodeTree<T>::~BinaryNodeTree() {
    destroyTree(rootPtr);
}

template <typename T>
int BinaryNodeTree<T>::getHeightHelper(BinaryNode<T> *subTreePtr) const {
    if (subTreePtr == nullptr) {
        return 0;
    } else {
        return 1 + max(getHeightHelper(subTreePtr->getLeftChildPtr(),
                getHeightHelper(subTreePtr->getRightChildPtr())));
    }
}

template <typename T>
int BinaryNodeTree<T>::getHeight() const {
    return getHeightHelper(rootPtr);
}

template <typename T>
int BinaryNodeTree<T>::getNumberOfNodesHelper(BinaryNode<T> *subTreePtr) const {
    if (subTreePtr == nullptr) {
        return 0;
    } else {
        return 1 + getNumberOfNodesHelper(subTreePtr->getLeftChildPtr()) + getNumberOfNodesHelper(subTreePtr->getRightChildPtr());
    }
}

template <typename T>
int BinaryNodeTree<T>::getNumberOfNodes() const {
    return getNumberOfNodesHelper(rootPtr);
}

template <typename T>
T BinaryNodeTree<T>::getRootData() const throw(PrecondViolateExcep)  {
    if (rootPtr == nullptr) {
        throw PrecondViolateExcep("rootPtr should not be null");
    }
    return rootPtr->getItem();
}

/**Add node */
template <typename T>
bool BinaryNodeTree<T>::add(const T &newData) {
    BinaryNode<T> *newNodePtr = new BinaryNode<T>(newData);
    rootPtr = balancedAdd(rootPtr, newNodePtr);
}

/**To add a node to the tree, we add the node to the root's shorter subtree.
 * The recursive call to balanceAdd adds the new node and returns a pointer to the revised subtree.
 * So, we need to link this subtree to the rest of the tree.*/
template<typename T>
BinaryNode<T> *BinaryNodeTree<T>::balancedAdd(BinaryNode<T> *subTreePtr, BinaryNode<T> *newNodePtr) {
    if (subTreePtr == nullptr) {
        return newNodePtr;
    } else {
        BinaryNode<T> *leftPtr = subTreePtr->getLeftChildPtr();
        BinaryNode<T> *rightPtr = subTreePtr->getRightChildPtr();

        if (getHeightHelper(leftPtr) > getHeightHelper(rightPtr)) {
            rightPtr = balancedAdd(rightPtr, newNodePtr);
            subTreePtr->setRightChildPtr(rightPtr);
        } else {
            leftPtr = balancedAdd(leftPtr, newNodePtr);
            subTreePtr->setLeftChildPtr(leftPtr);
        }
        return subTreePtr;
    }
}


template <typename T>
void BinaryNodeTree<T>::inorder(void visit(T &), BinaryNode<T> *treePtr) const {
    if (treePtr != nullptr) {
        inorder(visit, treePtr->getLeftChildPtr());
        // because visit need a reference parameter, we need an lvalue to reference
        // treePtr->getItem(); return a T has const modifier, so it could not be use on the left-hand side
        T theItem = treePtr->getItem();
        visit(theItem);
        inorder(visit, treePtr->getRightChildPtr());
    }
}
#endif //PROJECT_BINARYNODETREE_HPP
