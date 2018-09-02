//
// Created by zwpdbh on 2018/9/1.
//


#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    deque<double> values;
    ostream_iterator<double> output(cout, " ");

    values.push_back(2.2);
    values.push_back(3.5);
    values.push_back(1.1);

    cout << "values contains: ";

    for (size_t i = 0; i < values.size(); ++i) {
        cout << values[i] << ' ';
    }

    values.pop_front();
    cout << "\nAfter pop_front, values contains: ";
    copy(values.cbegin(),values.cend(), output);
}