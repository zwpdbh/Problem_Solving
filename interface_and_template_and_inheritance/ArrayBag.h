//
// Created by zwpdbh on 20/11/2017.
//

#ifndef PROBLEM_SOLVING_ARRAYBAG_H
#define PROBLEM_SOLVING_ARRAYBAG_H

#include "BagInterface.h"

template <class T>
class ArrayBag : BagInterface<T> {
private:
    static const int DEFAULT_CAPACITY = 6;
    T items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;

    int getIndexOf(const T& target) const;

public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const T& newEntry);
    bool remove(const T& anEntry);
    void clear();
    bool contains(const T& anEntry) const;
    int getFrequencyOf(const T& anEntry) const;
    std::vector<T> toVector() const;
};

#include "ArrayBag.cpp"
#endif //PROBLEM_SOLVING_ARRAYBAG_H
