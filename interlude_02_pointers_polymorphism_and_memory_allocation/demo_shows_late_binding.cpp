//
// Created by zwpdbh on 26/01/2018.
//

#include "PlainBox.h"
#include "../interlude_01_C++_classes/MagicBox.h"
#include <iostream>

using namespace std;

void placeInBox(PlainBox<string>* theBox, string theItem) {
    theBox->setItem(theItem);
}

int main() {
    string specialItem = "should not be set!";
    string otherItem = "this should be set";

    PlainBox<string>* myPlainBoxPtr = new PlainBox<string>();
    placeInBox(myPlainBoxPtr, specialItem);

    MagicBox<string>* myMagicBoxPtr = new MagicBox<string>();
    placeInBox(myMagicBoxPtr, otherItem);
    placeInBox(myMagicBoxPtr, specialItem);

    cout << myMagicBoxPtr->getItem() << endl;

    return 0;
}