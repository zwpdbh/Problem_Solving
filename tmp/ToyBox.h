//
// Created by zwpdbh on 27/10/2017.
//

#ifndef PROBLEM_SOLVING_TOYBOX_H
#define PROBLEM_SOLVING_TOYBOX_H

#include "PlainBox.h"

enum Color {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};

template<class T>
class ToyBox: public PlainBox<T> {
private:
    Color boxColor;
public:
    ToyBox();
    ToyBox(const Color& theColor);
    ToyBox(const T& theItem, const Color& theColor);
    Color getColor() const;
};

#endif //PROBLEM_SOLVING_TOYBOX_H
