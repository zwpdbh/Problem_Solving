//
// Created by zwpdbh on 2018/8/28.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void outputLine(int, const string &, double);

int main()
{
    // in means read input from file
    ifstream inClientFile("client.txt", ios::in);

    if (!inClientFile) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    int account;
    string name;
    double balance;

    cout << left << setw(10) << "Account" << setw(13)
        << "Name" << "Balance" << endl << fixed << showpoint;

    // display each record in file, it is as the same using std::cin
    while (inClientFile >> account >> name >> balance) {
        outputLine(account, name, balance);
    }
}

void outputLine(int account, const string &name, double balance) {
    cout << left << setw(10) << account
        << setw(13) << name
        << setw(7) << setprecision(2) << right << balance
        << endl;
}