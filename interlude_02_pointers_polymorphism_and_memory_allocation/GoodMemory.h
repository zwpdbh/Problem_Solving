//
// Created by zwpdbh on 26/01/2018.
//

#ifndef PROBLEM_SOLVING_GOODMEMORY_H
#define PROBLEM_SOLVING_GOODMEMORY_H

#include <string>
#include "../interlude_01_C++_classes/ToyBox.h"

class GoodMemory {
private:
    ToyBox<std::string>* someBoxPtr;

public:
    GoodMemory();
    ~GoodMemory();
    void do_something_while_no_leaking(const std::string &someItem);
};


#endif //PROBLEM_SOLVING_GOODMEMORY_H
