//
// Created by zwpdbh on 2018/8/28.
//

#include <iostream>
#include <string>
#include <fstream>   // contains file stream processing types
#include <cstdlib>   // exit function prototype

using namespace std;

int main() {
    // out means output into file
    ofstream outClientFile("client.txt", ios::out);

    if (!outClientFile) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the account, name, and balance." << endl
        << "Enter end-of-file to end input.\n?";

    int account;
    string name;
    double balance;

    /**use cin to read, then use fstream to output variable into file*/
    while (cin >> account >> name >> balance) {
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
}