//
// Created by zwpdbh on 28/09/2017.
//

#ifndef PROBLEM_SOLVING_PLAINBOX_H
#define PROBLEM_SOLVING_PLAINBOX_H

template<class T>
class PlainBox {
private:
    T item;
public:
    // Default constructor
    PlainBox();

    // Parametrized constructor
    PlainBox(const T& theItem);

    // Method to change the value of the data field
    void setItem(const T& theItem);

    // Method to get the value of the data field
    // labeling all accessor methods with the const declaration is appropriate and a good idea
    T getItem() const ;
};

#endif //PROBLEM_SOLVING_PLAINBOX_H
