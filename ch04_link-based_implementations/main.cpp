//
// Created by zwpdbh on 23/11/2017.
//

/*shows how to work with pointers to implement a class of bags.*/

#include "LinkedBag.h"
#include <string>
#include <iostream>

using namespace std;

void displayBag(LinkedBag<string>& bag) {
    cout << "The bag contains " << bag.getCurrentSize()
                                << " items: " << endl;
    vector<string> bagItems = bag.toVector();

    int numberOfEntries = (int)bagItems.size();
    for (int i = 0; i < numberOfEntries; ++i) {
        cout << bagItems[i] << " ";
    }
    cout << " " << endl;
}

void bagTester(LinkedBag<string>& bag) {
    cout << "isEmpty = " << bag.isEmpty() << endl;
    displayBag(bag);
    string items[] = {"one", "two", "three", "four", "five", "six"};
    cout << "\nAdd 6 items to the bag: " << endl;
    for (int i = 0; i < 6; ++i) {
        bag.add(items[i]);
    }
    displayBag(bag);
    cout << "\nisEmpty = " << bag.isEmpty() << endl;
    cout << "getCurrentSize = " << bag.getCurrentSize() << endl;
}

int main() {
    LinkedBag<string> bag;
    bagTester(bag);


    cout << "\n===test on copy constructor:" << endl;
    cout << "bag has " << bag.getCurrentSize() << " in total." << endl;
    cout << "using copy constructor.." << endl;
    LinkedBag<string> anotherBag(bag);

    cout << "The content in anotherBag is:" << endl;
    displayBag(anotherBag);

    anotherBag.remove("one");
    anotherBag.remove("two");
    displayBag(anotherBag);
    displayBag(bag);
    return 0;
}