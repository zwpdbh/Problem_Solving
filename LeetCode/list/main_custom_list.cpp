//
// Created by zwpdbh on 2018/8/21.
//

#include <iostream>
#include "List.hpp"

using namespace std;
using namespace my;

int main() {

    List list;
    for (int i = 0; i < 10; ++i) {
        list.add(i);
    }


    cout << list << endl;
    cout << "size of the list is : " << list.getSize() << endl;

    cout << list.remove(9) << endl;
    cout << list << endl;
    cout << "size of the list is : " << list.getSize() << endl;

}