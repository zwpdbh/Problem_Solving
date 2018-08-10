//
// Created by zwpdbh on 2018/8/10.
//

#ifndef PROJECT_BINARYTREEINTERFACE_HPP
#define PROJECT_BINARYTREEINTERFACE_HPP

#include "common/common.hpp"

template<typename T>
class BinaryTreeInterface {
public:
    virtual bool isEmpty() const = 0;

    virtual int getHeight() const = 0;

    virtual int getNumberOfNodes() const = 0;

    virtual T getRootData() const = 0;

    virtual void setRootData(const T &newData) = 0;

    virtual bool add(const T &newData) = 0;

    virtual bool remove(const T &data) = 0;

    virtual void clear() = 0;

    virtual T getEntry(const T &anEntry) const throw(TargetNotFoundException) = 0;

    virtual bool contains(const T &anEntry) const = 0;
    virtual bool preorderTraverse(void visit(T &)) const = 0;
    virtual bool inorderTraverse(void visit(T &)) const = 0;
    virtual bool postorderTraverse(void visit(T &)) const = 0;
};


#endif //PROJECT_BINARYTREEINTERFACE_HPP
