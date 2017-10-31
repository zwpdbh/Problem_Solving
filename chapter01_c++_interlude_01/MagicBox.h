//
// Created by zwpdbh on 28/10/2017.
//

#ifndef PROBLEM_SOLVING_MAGICBOX_H
#define PROBLEM_SOLVING_MAGICBOX_H

#include "PlainBox.h"

template <class T>
class MagicBox: public PlainBox<T> {
private:
    bool firstItemStored;

public:
    MagicBox();
    explicit MagicBox(const T& theItem);
    void setItem(const T& theItem);
};


#endif //PROBLEM_SOLVING_MAGICBOX_H
