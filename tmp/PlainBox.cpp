//
// Created by zwpdbh on 28/09/2017.
//

#include "PlainBox.h"

PlainBox::PlainBox() {}

PlainBox::PlainBox(const ItemType &theItem) {
    item = theItem;
}

void PlainBox::setItem(const ItemType &theItem) {
    item = theItem;
}

ItemType PlainBox::getItem() const {
    return item;
}
