//
// Created by zwpdbh on 10/11/2017.
//

#ifndef PROBLEM_SOLVING_RATEDPLAYER_H
#define PROBLEM_SOLVING_RATEDPLAYER_H


#include "TableTennisPlayer.h"

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned  int rating;

public:
    RatedPlayer (unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
    RatedPlayer (unsigned int r, const TableTennisPlayer &tp);
    unsigned int Rating () const  { return rating;}
    void ResetRating (unsigned int r) {rating = r;}
};


#endif //PROBLEM_SOLVING_RATEDPLAYER_H
