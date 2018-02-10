//
// Created by zwpdbh on 25/11/2017.
//

#ifndef PROBLEM_SOLVING_STACKINTERFACE_H
#define PROBLEM_SOLVING_STACKINTERFACE_H

template <class T>
class StackInterface {
public:
    /**sees whether this stack is empty
     * @return True if the stack is empty, or false if not.*/
    virtual bool isEmpty() const = 0;

    /**Adds a new entry to the top of this stack.
     * @post If the operation was successful, newEntry is at the top of the stack.
     * @param newEntry The object to be added as a new entry
     * @return True if the addition is successufl or false if not.*/
    virtual bool push(const T& newEntry) = 0;
    virtual bool pop() = 0;
    virtual T peek() const  = 0;
};
#endif //PROBLEM_SOLVING_STACKINTERFACE_H
