//
// Created by zwpdbh on 25/01/2018.
//

#include "../interlude_01_C++_classes/PlainBox.h"
#include "../interlude_01_C++_classes/MagicBox.h"

#include <iostream>
#include <string>
using namespace std;

void placeInBox(PlainBox<string>& theBox, string theItem) {
    theBox.setItem(theItem);
}

int main() {
    string specialItem = "should not be set!";
    string otherItem = "this should be set";

    PlainBox<string> myPlainBox;
    placeInBox(myPlainBox, specialItem);

    MagicBox<string> myMagicBox;
    placeInBox(myMagicBox, otherItem);
    placeInBox(myMagicBox, specialItem);

    cout << myMagicBox.getItem() << endl;

    return 0;
}