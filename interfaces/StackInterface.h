//
// Created by zwpdbh on 25/11/2017.
//

#ifndef PROBLEM_SOLVING_STACKINTERFACE_H
#define PROBLEM_SOLVING_STACKINTERFACE_H

template <class T>
class StackInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual bool push(const T& newEntry) = 0;
    virtual bool pop() = 0;
    virtual T peek() const  = 0;
};
#endif //PROBLEM_SOLVING_STACKINTERFACE_H
