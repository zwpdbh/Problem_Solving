//
// Created by zwpdbh on 26/01/2018.
//

/**This class shows the override base class method*/

#ifndef PROBLEM_SOLVING_MAGICBOX_H
#define PROBLEM_SOLVING_MAGICBOX_H

#include "PlainBox.h"

template<class ItemType>
class MagicBox: public PlainBox<ItemType>{
private:
    bool firstItemStored;
public:
    MagicBox();
    MagicBox(const ItemType& theItem);
    void setItem(const ItemType& theItem);
};

#include "MagicBox.cpp"
#endif //PROBLEM_SOLVING_MAGICBOX_H
