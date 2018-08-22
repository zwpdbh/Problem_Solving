//
// Created by zwpdbh on 2018/8/11.
//

#include "LeetCode.hpp"
#include "common/common.hpp"

/**First, find the smallest item in the array and exchange it with the first entry.
 * Then, find the next smallest item and exchange it with the second entry. Continue until the
 * entire array is sorted*/
void LeetCode::selectionSort(int *elements, int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (elements[j] < elements[minIndex]) {
                minIndex = j;
            }
        }
        swap(elements[i], elements[minIndex]);
    }
}