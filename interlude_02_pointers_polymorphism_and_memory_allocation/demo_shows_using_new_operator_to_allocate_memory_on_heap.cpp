//
// Created by zwpdbh on 26/01/2018.
//

#include "../interlude_01_C++_classes/PlainBox.h"
#include "../interlude_01_C++_classes/MagicBox.h"

#include <iostream>
using namespace std;

int main() {
    MagicBox<string>* myBoxPtr = new MagicBox<string>();
    string someItem = "something";
    myBoxPtr->setItem(someItem);

    delete myBoxPtr;
    myBoxPtr = nullptr;

    return 0;
}