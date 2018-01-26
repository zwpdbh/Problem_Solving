//
// Created by zwpdbh on 26/01/2018.
//

/**This class shows the inheritance*/

#ifndef PROBLEM_SOLVING_TOYBOX_H
#define PROBLEM_SOLVING_TOYBOX_H

#include "PlainBox.h"

enum Color {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};

template<class ItemType>
class ToyBox: public PlainBox<ItemType> {
private:
    Color boxColor;

public:
    ToyBox();
    ToyBox(const Color& theColor);
    ToyBox(const ItemType& theItem, const Color& theColor);
    Color getColor() const;
};

#include "ToyBox.cpp"
#endif //PROBLEM_SOLVING_TOYBOX_H
