//
// Created by zwpdbh on 20/11/2017.
//

#ifndef PROBLEM_SOLVING_ARRAYBAG_H
#define PROBLEM_SOLVING_ARRAYBAG_H

#include "interfaces/BagInterface.h"

template <class T>
class ArrayBag : public BagInterface<T> {
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

template <class T>
ArrayBag<T>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY) {}
// end of default constructor

template <class T>
bool ArrayBag<T>::add(const T &newEntry) {
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd) {
        items[itemCount] = newEntry;
        itemCount++;
    }
    return hasRoomToAdd;
}

template <class T>
std::vector<T> ArrayBag<T>::toVector() const {
    std::vector<T> bagContents;
    for (int i = 0; i < itemCount; ++i) {
        bagContents.push_back(items[i]);
    }
    return bagContents;
}

template <class T>
int ArrayBag<T>::getCurrentSize() const {
    return itemCount;
}

template <class T>
bool ArrayBag<T>::isEmpty() const {
    return itemCount == 0;
}

template <class T>
bool ArrayBag<T>::remove(const T& anEntry) {
    return false;
}

template <class T>
bool ArrayBag<T>::contains(const T& anEntry) const{
    return false;
}

template <class T>
int ArrayBag<T>::getFrequencyOf(const T& anEntry) const {
    return 0;
}

template <class T>
void ArrayBag<T>::clear() {

}
#endif //PROBLEM_SOLVING_ARRAYBAG_H
