//
// Created by zwpdbh on 2018/8/30.
//

#include <iostream>
#include <vector>
using namespace std;

template <typename  T>
void printVector(const vector<T> &integers) {
    for (auto constInterator = integers.cbegin(); constInterator != integers.cend(); ++constInterator) {
        cout << *constInterator << ' ';
    }
}

int main() {
    const size_t SIZE = 6;
    int values[SIZE] = {1, 2, 3, 4 ,5 ,6};
    vector<int> integers;

    cout << "The initial size of integers is: " <<integers.size()
        <<"\nThe initial capacity of integer is: " <<integers.capacity();

    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);

    cout <<"\nThe size of integers is: " << integers.size()
        << "\nThe capacity of integers is: " << integers.capacity();

    // display array using pointer notation
    cout << "\n\nOutput built-in array using pointer notation: ";
    for (const int *ptr = begin(values); ptr != end(values); ++ptr)
        cout << *ptr << ' ';

    cout << "\nOutput vector using interator notation: ";
    printVector(integers);
    cout << "\nReversed contents of vector integers: "; // notice the r, crbegin()
    for (auto reverseIterator = integers.crbegin(); reverseIterator != integers.crend(); ++reverseIterator) {
            cout << *reverseIterator << ' ';
    }
    cout << endl;
}