//
// Created by zwpdbh on 2018/8/20.
#include <iostream>
#include <stdexcept>
#include "array.hpp"
using namespace std;

int main()
{
    Array integers1(7);
    Array integers2;

    // print integers1 size and contents
    cout << "Size of Array integers1 is "
        << integers1.getSize()
        << "\nArray after initialization: \n" << integers1;

    // print integers2 size
    return 0;
}