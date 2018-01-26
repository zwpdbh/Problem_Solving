//
// Created by zwpdbh on 26/01/2018.
//

#include "MagicBox.h"

template<class ItemType>
MagicBox<ItemType>::MagicBox() {
    PlainBox<ItemType>();
    firstItemStored = false;
}

template<class ItemType>
MagicBox<ItemType>::MagicBox(const ItemType &theItem) {
    PlainBox<ItemType>();
    PlainBox<ItemType>::setItem(theItem);
    firstItemStored = true;
//    firstItemStored = false;    // Box has no magic initially
//    setItem(theItem);
}

template<class ItemType>
void MagicBox<ItemType>::setItem(const ItemType& theItem) {
    if (!firstItemStored) {
        PlainBox<ItemType>::setItem(theItem);
        firstItemStored = true;
    }
}
