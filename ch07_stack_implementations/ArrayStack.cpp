//
// Created by zwpdbh on 25/01/2018.
//


#include "ArrayStack.h"
#include <cassert>

template<class T>
ArrayStack<T>::ArrayStack() : top(-1) {
    T* items = new T(this->capacity);
}
// end default constructor

// copy constructor and destructor are supplied by the compiler


template<class T>
bool ArrayStack<T>::isEmpty() const {
    return top < 0;
}

template<class T>
bool ArrayStack<T>::push(const T &newEntry) {
    bool result = false;

    if (capacity < MAX_STACK - 1) {
        top++;
        items[top] = newEntry;
        result = true;
    } else if (capacity * 2 > MAX_STACK){
        result = false;
    } else {
        capacity =
    }
    return result;
}

template<class T>
bool ArrayStack<T>::pop() {
    bool result = false;
    if (!isEmpty()) {
        top--;
        result = true;
    }
    return result;
}

template<class T>
T ArrayStack<T>::peek() const {
    assert(!isEmpty());

    return this->items[top];
}
