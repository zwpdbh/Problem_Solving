//
// Created by zwpdbh on 2018/8/19.
//

#include "date.hpp"

using namespace std;

int main() {
    Date d1(12, 27, 2010);
    Date d2;

    cout << "d1 is" << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);

    d2.setDate( 2, 28, 2008 );
    cout<<"\n\n d2is"<<d2;
    cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";

}