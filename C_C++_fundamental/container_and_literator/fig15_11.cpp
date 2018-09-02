//
// Created by zwpdbh on 2018/8/31.
// illustrates function for retrieving and manipulating vector elements.
//

#include <iostream>
#include <array>    // array class-template definition
#include <algorithm> // vector class-template definition
#include <iterator> // ostream_iterator iterator
#include <stdexcept> // out_of_range exception
#include <vector>

using namespace std;

int main()
{
    const size_t SIZE = 6;
    array<int, SIZE> values = {1, 2, 3, 4, 5, 6};
    vector<int> integers(values.cbegin(), values.cend());
    ostream_iterator<int> output(cout, " ");

    cout << "Vector integers contains: ";
    copy(integers.cbegin(), integers.cend(), output);

    cout << "\nFirst element of integers: " << integers.front() << "\nLast element of integers: " << integers.back();

    integers[0] = 7;
    integers.at(2) = 10;
    integers.insert(integers.cbegin() + 1, 22);

    cout << "\n\nContents of vector integers after changes: ";
    copy(integers.cbegin(), integers.cend(), output);

    // access out-of-range element
    try {
        integers.at(100) = 777;
    } catch (out_of_range &outOfRange) {
        cout << "\n\nException: " << outOfRange.what();
    }

    // erase first element
    integers.erase(integers.cbegin());
    cout << "\n\nVector integers after erasing first element: ";
    copy(integers.cbegin(), integers.cend(), output);

    // erase remaining elements
    integers.erase(integers.cbegin(), integers.cend());
    cout << "\nAfter erasing all elements, vector integers " << (integers.empty() ? "is" : "is not" ) << "empty";

    // insert element from the array values
    integers.insert(integers.cbegin(), values.cbegin(), values.cend());
    cout << "\n\nContents of vector integers befor clear: ";
    copy(integers.cbegin(), integers.cend(), output);

    // empty itegers; clear calls erase to empty a collection
    integers.clear();
    cout << "\nAfter clear, vector integers " << (integers.empty() ? "is" : "is not") << "empty" << endl;
}