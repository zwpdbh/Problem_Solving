//
// Created by zwpdbh on 23/11/2017.
//

/*shows how to work with pointers to implement a class of bags.*/

#include "LinkedBag.h"
#include <string>
#include <iostream>
#include "../interlude_02_pointers_polymorphism_and_memory_allocation/ArrayBag.h"

using namespace std;

void displayBag(BagInterface<string> *bagPtr) {
    cout << "The bag contains " << bagPtr->getCurrentSize()
         << " items: " << endl;
    vector<string> bagItems = bagPtr->toVector();

    int numberOfEntries = (int)bagItems.size();
    for (int i = 0; i < numberOfEntries; ++i) {
        cout << bagItems[i] << " ";
    }
    cout << " " << endl;
}

void bagTester(BagInterface<string> *bagPtr) {
    /**false == 0 and true = !false*/
    cout << "isEmpty: return " << bagPtr->isEmpty() << "; should be 1 (true)" << endl;

    string items[] = {"one", "two", "three", "four", "five", "six"};
    cout << "\nAdd 6 items to the bag: " << endl;
    for (int i = 0; i < 6; ++i) {
        bagPtr->add(items[i]);
    }
    displayBag(bagPtr);

    cout << "isEmpty: returns " << bagPtr->isEmpty() << "; should be 0 (false)" << endl;
    cout << "getCurrentSize returns: " << bagPtr->getCurrentSize() << "; should be 6" << endl;
    cout << "Try to add another entry: add(\"extra\") returns "
         << bagPtr->add("extra") << endl;
}


int main() {
    BagInterface<string>* bagPtr = nullptr;
    char userChoice;
    cout << "Enter A to test the array-based implementation\n"
         << "or L to test the link-based implementation: ";
    cin >> userChoice;

    if (toupper(userChoice) == 'A') {
        bagPtr = new ArrayBag<string>();
        cout << "Testing the Array-based Bag: " << endl;
    } else {
        bagPtr = new LinkedBag<string>();
        cout << "Testing the Link-based Bag: " << endl;
    }

    cout << "The initial bag is empty. " << endl;
    bagTester(bagPtr);
    delete bagPtr;
    bagPtr = nullptr;

    cout << "All done. " << endl;

    return 0;
}