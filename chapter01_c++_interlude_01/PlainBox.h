//
// Created by zwpdbh on 28/09/2017.
//

#ifndef PROBLEM_SOLVING_PLAINBOX_H
#define PROBLEM_SOLVING_PLAINBOX_H

#include "BoxInterface.h"

template<class T>
class PlainBox: public BoxInterface<T> {
private:
    T item;
public:
    // Default constructor
    PlainBox();

    // Parametrized constructor
    explicit PlainBox(const T& theItem);

    // Method to change the value of the data field
    void setItem(const T& theItem);
//    virtual T setItem() const;

    // Method to get the value of the data field
    // labeling all accessor methods with the const declaration is appropriate and a good idea
    T getItem() const;
};

#endif //PROBLEM_SOLVING_PLAINBOX_H
