//
// Created by zwpdbh on 2018/8/19.
//


#include <iomanip>
#include "phonenumber.hpp"

using namespace std;

ostream &operator<<(ostream &output, const PhoneNumber &number) {
    output << "C" << number.areaCode << ")"
        << number.exchange << "-" << number.line;
    return output;
}

/**The function operator returns std::istream reference.
 * This enable input operations on PhoneNumber objects to be cascaded with input operations on other PhoneNumber objects
 * or other data types: cin >> phone1 >> phone2;*/
istream &operator>>(istream &input, PhoneNumber &number) {
    input.ignore();
    input >> setw(3) >> number.areaCode;
    input.ignore(2); // skip ) and space
    input >> setw(3) >> number.exchange;
    input.ignore();
    input >> setw(4) >> number.line;
    return input;
}