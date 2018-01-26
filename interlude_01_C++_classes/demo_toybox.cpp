//
// Created by zwpdbh on 26/01/2018.
//

#include <iostream>
#include "ToyBox.h"

int main() {
    std::string favoriteToy = "robot toy";
    ToyBox<std::string> myToyCase(favoriteToy, RED);
    std::string oldToy = myToyCase.getItem();
    favoriteToy = "new robot toy";
    myToyCase.setItem(favoriteToy);

    std::cout << "my latest toy is: " << myToyCase.getItem() << std::endl;

    return 0;
}