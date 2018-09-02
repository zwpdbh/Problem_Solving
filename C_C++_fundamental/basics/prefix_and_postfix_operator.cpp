//
// Created by zwpdbh on 2018/8/30.
//

#include <iostream>

using namespace std;

/**a++ and b++ is different, but if if it is a seperate statement alone, then there is no different result.
 * Use ++a when it is possible, for performance reason.*/
int main() {
    int a = 0;
    int b = 0;

//    cout << a++ << endl;
//    cout << ++b << endl;

    for (int i = 0; i < 10; ++i) {
        cout << "i = " << i << endl;
    }

    for (int j = 0; j < 10; j++) {
        cout << "j = " << j << endl;
    }

    return 0;
}