//
// Created by zwpdbh on 26/01/2018.
//

#include "GoodMemory.h"

// default constructor, if there is a data field is a pointer type, always initialize it to object or to nullptr.
GoodMemory::GoodMemory(): someBoxPtr(nullptr) {}

GoodMemory::~GoodMemory() {
    delete someBoxPtr;
}

void GoodMemory::do_something_while_no_leaking(const std::string &someItem) {
    someBoxPtr = new ToyBox<std::string>();
    someBoxPtr->setItem(someItem);
}

