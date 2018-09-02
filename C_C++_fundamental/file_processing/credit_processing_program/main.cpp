//
// Created by zwpdbh on 2018/8/29.
//

#include <fstream>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "clientdata.hpp"

using namespace std;

void outputLine(ostream &, const ClientData &);

/**Create a random-access file with 100 blank records sequentially. */
void partOne()
{
    ofstream outCredit("credit.dat", ios::out | ios::binary);

    if (!outCredit) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    ClientData blankClient;

    // output 100 blank records to file
    for (int i = 0; i < 100; ++i) {
        outCredit.write(reinterpret_cast<const char *>(&blankClient), sizeof(ClientData));
    }
    outCredit.close();
}


/**Write record to the specific location in the file, use combination of seekp and write to
 * output data at exact location of the file*/
void partTwo()
{

    int accountNumber;
    string lastName;
    string firstName;
    double balance;

    /**opened for input and output in binary mode, thus avoid the creating of file from scratch*/
    fstream outCredit("credit.dat", ios::in | ios::out | ios::binary);
    if (!outCredit) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter accout number (1 to 100, 0 to end input)\n?";

    // require user to specify account number
    ClientData client;
    cin >> accountNumber;

    // user enters information, which is copied into file
    while (accountNumber > 0 && accountNumber <= 100) {
        // user enters last name, firstname and balance
        cout << "Enter lastname, firstname, balance\n?";
        cin >> lastName;
        cin >> firstName;
        cin >> balance;

        // set record accountNumber, lastName, firstName and balance values
        client.setAccountNumber(accountNumber);
        client.setLastName(lastName);
        client.setFirstName(firstName);
        client.setBalance(balance);

        // seek position in file of user-specified record, seekp sets
        // the put file-position pointer to a specific position in the file
        outCredit.seekp((client.getAccountNumber() - 1) * sizeof(ClientData));

        // write user-specified information in file
        outCredit.write(reinterpret_cast<const char *>(&client), sizeof(ClientData));

        // enable user to enter another account
        cout << "Enter account number\?";
        cin >> accountNumber;
    }
}


/**Read file sequentially and print only those records that contain data*/
void partThree()
{
    ifstream inCredit("credit.dat", ios::in | ios::binary);
    if (!inCredit) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    cout << left << setw(10) << "Account"
        << setw(16) << "Last Name"
        << setw(11) << "First Name"
        << left << setw(10) << right << "Balance" << endl;

    ClientData client;

    // read first record from file
    inCredit.read(reinterpret_cast<char *>(&client), sizeof(ClientData));
    while (inCredit && inCredit.eof()) {
        // decide if the record contains account data
        if (client.getAccountNumber() != 0) {
            outputLine(cout, client);
        }
        // read next from file
        inCredit.read(reinterpret_cast<char *>(&client), sizeof(ClientData));
    }
}

int main() {

    partOne();
    partTwo();
    partThree();

    return 0;
}

// display single record
void outputLine(ostream &output, const ClientData &record) {
    output << left << setw(10) << record.getAccountNumber()
        << setw(16) << record.getLastName()
        << setw(11) << record.getFirstName()
        << setw(10) << setprecision(2) << right << fixed
        << showpoint << record.getBalance() << endl;
}