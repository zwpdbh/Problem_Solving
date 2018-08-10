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
    BinaryNode<T> *blancedAdd(BinaryNode<T> *subTreePtr, BinaryNode<T> *newNodePtr);

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
#endif //PROJECT_BINARYNODETREE_HPP
