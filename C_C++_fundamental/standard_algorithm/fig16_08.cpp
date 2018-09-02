//
// Created by zwpdbh on 2018/9/2.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

int main()
{
    const size_t SIZE = 5;
    array<int, SIZE> a1 = {1, 3, 5, 7, 9};
    ostream_iterator<int> output(cout, " ");

    array<int, SIZE> results;
    copy_backward(a1.cbegin(), a1.cend(), results.end());
    cout << "\nAfter copy_backward, results contains: ";
    copy(results.cbegin(), results.cend(), output);
}