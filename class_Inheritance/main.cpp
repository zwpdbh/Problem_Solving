//
// Created by zwpdbh on 10/11/2017.
//

#include <iostream>
#include "TableTennisPlayer.h"
#include "RatedPlayer.h"

using namespace std;

int main() {
    

    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mollory", "Duck", true);
    rplayer1.Name();

    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    player1.Name();
    if (player1.HasTable()) {
        cout << ": has a table";
    } else {
        cout << ": hasn't a table\n";
    }

    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    // initialize RatedPlayer using TableTennisPlayer object
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;

    return 0;

//
//    TableTennisPlayer player1("Chuck", "Blizzard", true);
//    TableTennisPlayer player2("Tara", "Boomdea", false);
//    player1.Name();
//
//    if (player1.HasTable()) {
//        cout << ": has a table.\n";
//    } else {
//        cout << ": hasn't a table.\n";
//    }
//
//    player2.Name();
//    if (player2.HasTable()) {
//        cout << ": has a table";
//    } else {
//        cout << ": hasn't a table.\n";
//    }
//
//    RatedPlayer rplayer2(1212, player1);
//    cout << "Name: ";
//    rplayer2.Name();
//    cout << "; Rating: " << rplayer2.Rating() << endl;

    return 0;
}
