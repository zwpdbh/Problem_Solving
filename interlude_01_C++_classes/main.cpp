//
// Created by zwpdbh on 07/11/2017.
//

#include <iostream>
#include "StringBag.h"

using namespace std;

void callme1(StringBag&);
void callme2(StringBag);

int main() {
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBag headline1("Celery Stralks at Mdnight");
        StringBag headline2("Lettuce Prey");
        StringBag sports("Spanach Leaves Bowl for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;

        callme2(headline2);
        cout << "headline2: " << headline2 << endl;

        cout << "Initialize one object to another: \n";
        StringBag sailor = sports;
        cout << "sailor: " << sailor << endl;

        cout << "Assign one object to another: \n";
        StringBag knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block. \n";
    }

    cout << "End of main()\n";


    return 0;
}

void callme1(StringBag& rsb)
{
    cout << "String passed by reference:\n";
    cout << " \"" << rsb << "\"\n";
}

void callme2(StringBag sb)
{
    cout << "String passed by value:\n";
    cout << " \"" << sb << "\"\n";
}