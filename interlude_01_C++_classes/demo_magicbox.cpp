//
// Created by zwpdbh on 26/01/2018.
//

#include <iostream>
#include "MagicBox.h"

using namespace std;

int main() {
    string name = "zhao wei";
    MagicBox<string> magicBox(name);

    string new_name = "frank";
    magicBox.setItem(new_name);

    cout << magicBox.getItem() << endl;

    return 0;
}