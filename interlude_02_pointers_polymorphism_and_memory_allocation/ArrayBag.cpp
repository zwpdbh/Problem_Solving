//
// Created by zwpdbh on 09/02/2018.
//

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
    if (!hasRoomToAdd) {
        T* oldArray = items;
        items = new T[2 * maxItems];
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