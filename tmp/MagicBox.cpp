//
// Created by zwpdbh on 28/10/2017.
//

#include "MagicBox.h"

/**
 * default constructor
 */
template <class T>
MagicBox<T>::MagicBox() {
    // in default constructor, we must call base class' default constructor
    PlainBox<T>();
    // then initialize custom data field
    firstItemStored = false;
}

/**
 * Default constructor which use one item to initialize.
 */
template <class T>
MagicBox<T>::MagicBox(const T &theItem){
    firstItemStored = false;
    setItem(theItem);
}


template <class T>
void MagicBox<T>::setItem(const T &theItem) {
    if (!firstItemStored) {
        // Here, we need to use method on 'base class'.
        PlainBox<T>::setItem(theItem);
        firstItemStored = true;
    }

}

