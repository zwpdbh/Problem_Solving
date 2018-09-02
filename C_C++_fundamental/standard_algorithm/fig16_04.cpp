//
// Created by zwpdbh on 2018/9/2.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

//bool greater9(int);

int main()
{
    const size_t SIZE = 10;
    array<int, SIZE> init = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
    ostream_iterator<int> output(cout, " ");

    array<int, SIZE> a1(init);
    cout << "a1 before replacing all 10s:\n ";
    copy(a1.cbegin(), a1.cend(), output);

    // replace all 10 in a1 with 100
    replace(a1.begin(), a1.end(), 10, 100);
    cout << "\na1 after replacing 10 with 100:\n ";
    copy(a1.cbegin(), a1.cend(), output);
}