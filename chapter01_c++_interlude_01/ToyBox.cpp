//
// Created by zwpdbh on 27/10/2017.
//

#include "ToyBox.h"
template<class T>
ToyBox<T>::ToyBox() {
    PlainBox<T>();
    boxColor = BLACK;
}

template <class T>
ToyBox<T>::ToyBox(const Color &theColor) {
    PlainBox<T>();
    boxColor = theColor;
}

template <class T>
ToyBox<T>::ToyBox(const T &theItem, const Color &theColor) {
    PlainBox<T>();
    PlainBox<T>::setItem(theItem);
    boxColor = theColor;
}

template <class T>
Color ToyBox<T>::getColor() const {
    return this->boxColor;
}
