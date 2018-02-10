//
// Created by zwpdbh on 20/11/2017.
//

#ifndef PROBLEM_SOLVING_ARRAYBAG_H
#define PROBLEM_SOLVING_ARRAYBAG_H

#include "../interfaces/BagInterface.h"

template <class ItemType>
class ArrayBag : public BagInterface<ItemType> {
private:
    static const int DEFAULT_CAPACITY = 6;
    ItemType* items;
    int itemCount;
    int maxItems;


public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;
};


template <class T>
ArrayBag<T>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY) {
    items = new T[maxItems];
}
// end of default constructor


template <class ItemType>
bool ArrayBag<ItemType>::add(const ItemType &newEntry) {
    bool hasRoomToAdd = (itemCount < maxItems);
    if (!hasRoomToAdd) {
        ItemType* oldArray = items;
        items = new ItemType[2 * maxItems];
        for (int index = 0; index < maxItems; index++) {
            items[index] = oldArray[index];
        }
        delete [] oldArray;
        maxItems = 2 * maxItems;
    }
    items[itemCount] = newEntry;
    itemCount++;

    return true;
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
