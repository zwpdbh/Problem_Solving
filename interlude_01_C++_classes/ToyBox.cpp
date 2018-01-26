//
// Created by zwpdbh on 26/01/2018.
//

#include "ToyBox.h"

// default constructor
template<class ItemType>
ToyBox<ItemType>::ToyBox() {
    PlainBox<ItemType>();
    boxColor = BLACK;
}

template<class ItemType>
ToyBox<ItemType>::ToyBox(const Color &theColor) {
    PlainBox<ItemType>();
    boxColor = theColor;
}

template<class ItemType>
ToyBox<ItemType>::ToyBox(const ItemType &theItem, const Color &theColor) {
    PlainBox<ItemType>();
    // use parent class'es method
    PlainBox<ItemType>::setItem(theItem);
    boxColor = theColor;
}

template<class ItemType>
Color ToyBox<ItemType>::getColor() const {
    return boxColor;
}