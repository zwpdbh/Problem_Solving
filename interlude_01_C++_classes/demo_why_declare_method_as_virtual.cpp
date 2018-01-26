//
// Created by zwpdbh on 26/01/2018.
//

#include "PlainBox.h"
#include "MagicBox.h"
#include <iostream>

using namespace std;

int main() {
    PlainBox<string> cardBox;
    cardBox = MagicBox<string>("Queen of Hearts");

    cardBox.setItem("Jack of Spades");
    /**Because the compiler considers the object cardBox to be of type PlainBox<string>,
     * the PlainBox version of the method setItem is used in the previous statement.
     * The PlainBox implementation of setItem stores the value of its parameter in item.
     * Thus, a problem arises when our client calls the method getItem*/
    cout << "This should be Queen of Hearts since it is from a MagicBox, but it is: "
         << cardBox.getItem() << endl;

    /**The method getItem returns the string "Jack of Spades" instead of "Queen of Hearts".
     * This is not the behavior the client desires, because cardBox was assigned an instance of MagicBox.*/

    /**Using the keyword virtual in front of the prototype, or header, of the method tells the C++ compiler that the code this method executes is determined at runtime, not when the program is compiled*/

    return 0;
}