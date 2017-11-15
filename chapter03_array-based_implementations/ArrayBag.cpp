//
// Created by zwpdbh on 2017/10/30.
//

#include "ArrayBag.h"

template <class T>
ArrayBag<T>::ArrayBag() {
    itemCount = 0;
    maxItems = DEFAULT_CAPACITY;
}

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
    for (int i = 0; i < itemCount; i++) {
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
int ArrayBag<T>::getIndexOf(const T &target) const {
    bool found = false;
    int result = -1;
    int searchIndex = 0;

    while(!found && (searchIndex < itemCount)) {
        if (items[searchIndex] == target) {
            found = true;
            result = searchIndex;
        } else {
            searchIndex++;
        }
    }
    return result;
}

template <class T>
bool ArrayBag<T>::remove(const T &anEntry) {
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem) {
        this->itemCount--;
        items[locatedIndex] = items[itemCount];
    }
    return canRemoveItem;
}

template <class T>
void ArrayBag<T>::clearAll() {
    itemCount = 0;
}

template <class T>
bool ArrayBag<T>::contains(const T &anEntry) const {
    bool found = false;
    int curIndex = 0;
    while (!found && (curIndex < itemCount)) {
        if (anEntry == items[curIndex]) {
            found = true;
        }
        curIndex++;
    }

    return found;
}

template <class T>
int ArrayBag<T>::getFrequencyOf(const T &anEntry) const {
    int frequency = 0;
    int curIndex = 0;
    while (curIndex < itemCount) {
        if (items[curIndex] == anEntry) {
            frequency++;
        }
        curIndex++;
    }
    return frequency;
}

