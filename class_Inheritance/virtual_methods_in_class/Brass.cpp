//
// Created by zwpdbh on 10/11/2017.
//

#include "Brass.h"
#include <iostream>

using namespace std;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);

format setFormat()
{
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}

Brass::Brass(const std::string &s, long an, double bal)
: fullName(s), acctNum(an), balance(bal)
{}

void Brass::Deposit(double amt)
{
    if (amt < 0) {
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled.\n";
    } else {
        balance += amt;
    }
}

void Brass::Withdraw(double amt)
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0) {
        cout << "Withdrawal amout must be positive; "
             << "withdrawal canceled.\n";
    } else if (amt <= balance) {
        balance -= amt;
    } else {
        cout << "Withdrawal amount of $" << amt
                                         << " exceeds your balance.\n"
                                         << "Withdrawal canceled.\n";
        restore(initialState, prec); // restore original format
    }
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec); // restore original format
}

