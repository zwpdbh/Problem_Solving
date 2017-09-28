//
// Created by zwpdbh on 28/09/2017.
//

#ifndef PROBLEM_SOLVING_PLAINBOX_H
#define PROBLEM_SOLVING_PLAINBOX_H

typedef double ItemType;

class PlainBox {
private:
    ItemType item;
public:
    // Default constructor
    PlainBox();

    // Parametrized constructor
    PlainBox(const ItemType& theItem);

    // Method to change the value of the data field
    void setItem(const ItemType& theItem);

    // Method to get the value of the data field
    // labeling all accessor methods with the const declaration is appropriate and a good idea
    ItemType getItem() const ;
};


#endif //PROBLEM_SOLVING_PLAINBOX_H
