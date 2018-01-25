//
// Created by zwpdbh on 25/01/2018.
//

#ifndef PROBLEM_SOLVING_ARRAYSTACK_H
#define PROBLEM_SOLVING_ARRAYSTACK_H

#include "../interfaces/StackInterface.h"
const int MAX_STACK = 1000;

template <class T>
class ArrayStack: public StackInterface<T> {
private:
    int capacity = 2;
    T* items;
    int top;

public:
    ArrayStack();
    bool isEmpty() const;
    bool push(const T& newEntry);
    bool pop();
    T peek() const;


};

#include "ArrayStack.cpp"
#endif //PROBLEM_SOLVING_ARRAYSTACK_H
