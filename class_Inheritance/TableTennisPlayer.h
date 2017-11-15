//
// Created by zwpdbh on 10/11/2017.
//

#ifndef PROBLEM_SOLVING_TABLETENNISPLAYER_H
#define PROBLEM_SOLVING_TABLETENNISPLAYER_H

#include <iostream>

using  namespace std;

// simple base class
class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    explicit TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);
    void  Name() const;
    bool HasTable() const {return hasTable;};
    void ResetTable(bool v) {hasTable = v;};
};


#endif //PROBLEM_SOLVING_TABLETENNISPLAYER_H
