//
// Created by zwpdbh on 20/11/2017.
//

#include "ArrayBag.h"

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