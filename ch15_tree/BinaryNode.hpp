//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_BINARYNODE_HPP
#define PROJECT_BINARYNODE_HPP

/**A class of link-based binary tree will declare one data member, a pointer(rootPtr) to the tree's root node.
 * If the tree is empty, rootPtr will be nullptr.*/
template <typename T>
class BinaryNode {
private:
    T item;
    BinaryNode<T> *leftChild;
    BinaryNode<T> *rightChild;

public:
    BinaryNode();
    BinaryNode(const T &anitem);
    BinaryNode(const T &anItem, BinaryNode<T> *leftPtr, BinaryNode<T> *rightPtr);
    void setItem(const T &anItem);
    T getItem() const;

    bool isLeaf() const;

    /**points to the root's left subtree, if the left subtree is empty, the pointer to it will be nullptr*/
    BinaryNode<T> *getLeftChildPtr() const;
    /**In general, if the pointer to a node is not nullptr, then the node is not null and contains an Item*/
    BinaryNode<T> *getRightChildPtr() const;

    void setLeftChildPtr(BinaryNode<T>* leftPtr);
    void setRightChildPtr(BinaryNode<T>* rightPtr);
};

#endif //PROJECT_BINARYNODE_HPP
