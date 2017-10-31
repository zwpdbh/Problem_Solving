//
// Created by zwpdbh on 28/09/2017.
//

#include "PlainBox.h"

template <class T>
PlainBox<T>::PlainBox() {}

template<class T>
PlainBox<T>::PlainBox(const T& theItem) {
    item = theItem;
}

template<class T>
void PlainBox<T>::setItem(const T& theItem) {
    item = theItem;
}

template<class T>
T PlainBox<T>::getItem() const {
    return item;
}
