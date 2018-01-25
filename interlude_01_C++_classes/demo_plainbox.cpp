//
// Created by zwpdbh on 25/01/2018.
//

#include "PlainBox.h"
#include <iostream>

using namespace std;

int main() {
    PlainBox<double> numberbox;
    PlainBox<string> namebox;

    double health = 6.5;
    numberbox.setItem(health);

    string secretName = "zhao wei";
    namebox.setItem(secretName);

    cout << "numberbox: " << numberbox.getItem() << endl;
    cout << "namebox: " << namebox.getItem() << endl;

    return 0;
}