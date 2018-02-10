//
// Created by zwpdbh on 10/02/2018.
//

#ifndef PROBLEM_SOLVING_BOARD_H
#define PROBLEM_SOLVING_BOARD_H

#include <vector>
#include <cassert>
#include <iostream>
#include "Queen.h"

using namespace std;

static const int BOARD_SIZE = 8;

class Board {
private:
    vector<Queen*> queens; // array of pointers to queens on the board

    /**see whether a queen exists in position at row, col*/
    bool isQueen(int atRow, int atCol) const;
    /**attempts to place queen on board, starting with the designated queen*/
    bool placeQueen(Queen* queenPtr);
    /**remove the last queen from board*/
    void removeQueen();
    /**place a queen on the board*/
    void setQueen(const Queen* queenPtr);

public:
    Board();

    ~Board();

    void clear();

    void display() const;

    /**Initialize the eight queen problem*/
    void doEightQueen();

    int getNumQueens() const;

    /**return a pointer to the queen at the designated index*/
    const Queen* getQueen(int index) const;
};


#endif //PROBLEM_SOLVING_BOARD_H
