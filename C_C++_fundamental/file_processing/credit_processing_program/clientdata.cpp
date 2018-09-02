//
// Created by zwpdbh on 2018/8/29.
//

#include "clientdata.hpp"
using namespace std;

ClientData::ClientData(int accountNumberValue, const std::string &lastName, const std::string &firstName, double balanceValue)
: accountNumber(accountNumberValue), balance(balanceValue)
{
    setLastName(lastName);
    setFirstName(firstName);
}

int ClientData::getAccountNumber() const {
    return accountNumber;
}

void ClientData::setAccountNumber(int accountNumberValue)
{
    accountNumber = accountNumberValue;
}

std::string ClientData::getLastName() const {
    return lastName;
}

/**Because the string do not have uniform size, we need to transform it into fixed size of array of char. */
void ClientData::setLastName(const std::string &lastNameString) {
    int length = lastNameString.size();
    length = (length < 15 ? length : 14);

    lastNameString.copy(lastName, length);
    /**Don't forget append null character to lastName*/
    lastName[length] = '\0';
}

std::string ClientData::getFirstName() const {
    return firstName;
}

void ClientData::setFirstName(const std::string &firstNameString) {
    int length = firstNameString.size();
    length = (length < 10 ? length : 9);

    firstNameString.copy(firstName, length);
    firstName[length] = '\0';
}

double ClientData::getBalance() const {
    return balance;
}

void ClientData::setBalance(double balance) {
    balance = balance;
}