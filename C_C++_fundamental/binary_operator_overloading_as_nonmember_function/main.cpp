//
// Created by zwpdbh on 2018/8/19.
//
#include "phonenumber.hpp"
using namespace std;

int main() {
    PhoneNumber phoneNumber;

    cout << "Enter phone number int the form (123) 456-7890:" << endl;
    cin >> phoneNumber;
    cout << "The phone number entered was: ";
    cout << phoneNumber << endl;

    return 0;
}