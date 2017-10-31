//
// Created by zwpdbh on 28/09/2017.
//
#include <string>
#include <iostream>


#include "PlainBox.cpp"
#include "ToyBox.cpp"
#include "MagicBox.cpp"

using namespace std;

int main() {
    PlainBox<double> box1(3);
    PlainBox<double> box0;

    ToyBox<int> testToyBox(10, RED);
	cout << "the color of testToyBox is " << testToyBox.getColor() << endl;

    MagicBox<std::string> box2("this is magic");
    cout << "the item in box2 is " << box2.getItem() << endl;

    // illustrate that the problem of not using virtual class
    PlainBox<string> cardBox;
    cardBox = MagicBox<string>("Queen of Hearts");
    cardBox.setItem("Jack of Spades");
    string myFirstCard = cardBox.getItem();
    cout << myFirstCard << endl;

    return 0;
}
