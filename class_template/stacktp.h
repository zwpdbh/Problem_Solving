//
// Created by zwpdbh on 14/11/2017.
//

#ifndef PROBLEM_SOLVING_STACKTP_H
#define PROBLEM_SOLVING_STACKTP_H

template <class T>
class Stack
{
private:
    enum {MAX = 10};
    T items[MAX];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const T& item); // add item to stack
    bool pop(T& item); // pop top into item
};

#endif //PROBLEM_SOLVING_STACKTP_H
