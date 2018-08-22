//
// Created by zwpdbh on 2018/8/11.
//
#include <iostream>
#include "LeetCode.hpp"
#include "common/common.hpp"

using namespace std;

int main() {

    int elements[10];
    for (int i = 0; i < 10; ++i) {
        elements[i] = 10 - i;
    }
    printArray(elements, 10);

    LeetCode::selectionSort(elements, 10);
    printArray(elements, 10);
    return 0;
}