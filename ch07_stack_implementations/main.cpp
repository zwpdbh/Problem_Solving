//
// Created by zwpdbh on 25/01/2018.
//

#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;

int main() {
    StackInterface<string>* stackPtr = new ArrayStack<string>();
    string anItem;

    cout << "Enter a string: ";
    cin >> anItem;
    stackPtr->push(anItem);
}