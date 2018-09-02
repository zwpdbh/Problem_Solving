//
// Created by zwpdbh on 2018/8/31.
//

#include <iostream>
#include <array>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

template <typename T>
void printList(const list<T> &listRef);

int main()
{
    const size_t SIZE = 4;
    array<int, SIZE> ints = {2, 6, 4, 8};
    list<int> values;
    list<int> otherValues;

    values.push_front(1);
    values.push_front(2);
    values.push_back(4);
    values.push_back(3);

    cout << "values contains: ";
    printList(values);

    values.sort();
    cout << "\nvalues after sorting contains: ";
    printList(values);

    // inserts elements of ints into otherValues
    otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
    cout << "\nAfter insert, otherValues contains: ";
    printList(otherValues);

    // remove other values elements and insert at end of values
    values.splice(values.cend(), otherValues);
    cout << "\nAfter splice, values contains: ";
    printList(values);

    values.sort();
    cout << "\nAfter sort, values contains: ";
    printList(values);

    // insert elements of ints into otherValues
    otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
    otherValues.sort();
    cout << "\nAfter insert and sort, otherValues contains: ";
    printList(otherValues);

    // remove otherValues elements and insert into values in sorted order
    // Notice, before merge the two list must be sorted !!!
    values.merge(otherValues);
    cout << "\nAfter merge: \n values contains: ";
    printList(values);
    cout << "\n otherValues contains: ";
    printList(otherValues);


    values.pop_front();
    values.pop_back();
    cout << "\nAfter pop_front and pop_back:\n values contains: ";
    printList(values);

    values.unique();
    cout << "\nAfter unique, values contains: ";
    printList(values);

    // swap elements of values and otherValues
    values.swap(otherValues);
    cout << "\nAfter swap:\n values contains: ";
    printList(values);
    cout << "\n otherValues contains: ";
    printList(otherValues);

    // replace contents of values with elements of otherValues
    values.assign(otherValues.cbegin(), otherValues.cend());
    cout << "\nAfter assign, values contains: ";
    printList(values);

    // remove otherValues elements and insert into values in sorted order
    values.merge(otherValues);
    cout << "\nAfter merge, values contains: ";
    printList(values);

    values.remove(4);
    cout << "\nAfter remove(4), values contains: ";
    printList(values);
}

template <typename T>
void printList(const list<T> &listRef) {
    if (listRef.empty()) {
        cout << "List is empty";
    } else {
        ostream_iterator<T> output(cout, " ");
        copy(listRef.cbegin(), listRef.cend(), output);
    }
}
