//
// Created by zwpdbh on 14/11/2017.
//

#include "stacktp.h"

template <class T>
Stack<T>::Stack() {
    top = 0;
}

template <class T>
bool Stack<T>::isempty() {
    return top == 0;
}

template <class T>
bool Stack<T>::isfull() {
    return top == MAX;
}

template <class T>
bool Stack<T>::push(const T &item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

template <class T>
bool Stack<T>::pop(T &item) {
    if (top > 0) {
        item = items[top--];
        return true;
    } else {
        return false;
    }
}