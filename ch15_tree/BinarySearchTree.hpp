//
// Created by zwpdbh on 2018/8/12.
//

#ifndef PROBLEM_SOLVING_BINARYSEARCHTREE_HPP
#define PROBLEM_SOLVING_BINARYSEARCHTREE_HPP

#include "BinaryNodeTree.hpp"

template <typename T>
class BinarySearchTree : public BinaryNodeTree<T> {
private:
    BinaryNode<T> *rootPtr;

public:
    BinarySearchTree();
    BinarySearchTree(const T &rootItem);
    BinarySearchTree(const BinarySearchTree<T> &tree);
    virtual ~BinarySearchTree();

    bool isEmpty() const;
    int getHeight() const;
    int getNumberOfNodes() const;
    T getRootData() const throw(PrecondViolateExcep);
    void setRootData(const T &newData) const throw(PrecondViolateExcep);
    bool add(const T &newEntry);
    bool remove(const T &anEntry);
    void clear();
    T getEntry(const T &anEntry) const throw(TargetNotFoundException);
    bool contains(const T &anEntry) const;

    void preorderTraverse(void visit(T &)) const;

    void inorderTraverse(void visit(T &)) const;

    void postorderTraverse(void visit(T &)) const;

    BinarySearchTree<T> &operator=(const BinarySearchTree<T> &rightHandSide);

protected:
    BinaryNode<T> *remove(BinaryNode<T> *node, const T &anEntry, bool &successful);
};

template <typename T>
BinaryNode<T> *getLeftMost(BinaryNode<T> *node) {
    if (node == nullptr) {
        return nullptr;
    }

    while(node->getLeftChildPtr() != nullptr) {
        node = node->getLeftChildPtr();
    }
    return node;
}

template <typename T>
BinaryNode<T> *deleteLeftMost(BinaryNode<T> *node) {
    if (node->getLeftChildPtr() == nullptr) {
        return node->getRightChildPtr();
    }

    node->setLeftChildPtr(deleteLeftMost(node->getLeftChildPtr()));
    return node;
}


template <typename T>
BinaryNode<T> *BinarySearchTree<T>::remove(BinaryNode<T> *node, const T &anEntry, bool &successful) {
    if (node == nullptr) {
        successful = false;
        return nullptr;
    }

    if (anEntry < node->getItem()) {
        BinaryNode<T> *result = remove(node->getLeftChildPtr(), anEntry, successful);
        node->setLeftChildPtr(result);
    } else if (anEntry > node->getItem()) {
        BinaryNode<T> *result = remove(node->getRightChildPtr(), anEntry, successful);
        node->setRightChildPtr(result);
    } else {
        // 3 cases: node is leaf, node has one child(left or right), and node has both children
        if (node->getLeftChildPtr() == nullptr && node->getRightChildPtr()== nullptr) {
            delete node;
            node = nullptr;
        } else if (node->getRightChildPtr() == nullptr && node->getLeftChildPtr() != nullptr) {
            node =  node->getLeftChildPtr();
        } else if (node->getLeftChildPtr() == nullptr && node->getRightChildPtr() != nullptr) {
            node = node->getRightChildPtr();
        } else {
            // Save a link to the node to be deleted.
            BinaryNode<T> *tmp = node;

            // set node to point to its successor
            node = getLeftMost(tmp->getRightChildPtr());

            // set right link of node to point to deleteLeftMost(tmp.right)
            node->setRightChildPtr(deleteLeftMost(tmp->getRightChildPtr()));

            // set left link of node to point to tmp.left
            node->setLeftChildPtr(tmp->getLeftChildPtr());
        }
    }

    return node;
}

template <typename T>
bool BinarySearchTree<T>::remove(const T &anEntry) {
    bool successfull = false;
    rootPtr = remove(rootPtr, anEntry, successfull);
    return successfull;
}

#endif //PROBLEM_SOLVING_BINARYSEARCHTREE_HPP
