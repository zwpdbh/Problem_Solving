//
// Created by zwpdbh on 26/01/2018.
//

#include "GoodMemory.h"
#include <iostream>

using namespace std;

int main() {
    string name = "my name";
    GoodMemory goodMemoryObject;

    goodMemoryObject.do_something_while_no_leaking(name);

    return 0;
}