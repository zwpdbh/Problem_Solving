//
// Created by zwpdbh on 25/01/2018.
//

#include "../interlude_01_C++_classes/PlainBox.h"
#include "../interlude_01_C++_classes/MagicBox.h"

#include <iostream>
using namespace std;

int main() {
    string specialItem = "should not be set!";
    string otherItem = "this should be set";

    PlainBox<string> mySpecialBox = MagicBox<string>();
    mySpecialBox.setItem(otherItem);
    mySpecialBox.setItem(specialItem);

    cout << mySpecialBox.getItem() << endl;

    return 0;
}