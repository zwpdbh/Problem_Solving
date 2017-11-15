//
// Created by zwpdbh on 10/11/2017.
//

#include "TableTennisPlayer.h"

//TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) {
//    this->firstname = fn;
//    this->lastname = ln;
//    this->hasTable = ht;
//}


TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) :
        firstname(fn), lastname(ln), hasTable(ht)
{}



void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}