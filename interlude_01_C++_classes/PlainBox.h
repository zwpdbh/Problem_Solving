//
// Created by zwpdbh on 25/01/2018.
//

#ifndef PROBLEM_SOLVING_PLAINBOX_H
#define PROBLEM_SOLVING_PLAINBOX_H

template <class ItemType>
class PlainBox {
private:
    ItemType  item;

public:
    // default constructor
    PlainBox();

    // parameterized constructor
    PlainBox(const ItemType& theItem);

    // method to change the value of the data field
    void setItem(const ItemType& theItem);

    // Method to get the value of the data field
    // This keyword is a signal to both the compiler and other programmers that the method does not
    // change the data fields of the object.
    ItemType  getItem() const;
};

#include "PlainBox.cpp"
#endif //PROBLEM_SOLVING_PLAINBOX_H
