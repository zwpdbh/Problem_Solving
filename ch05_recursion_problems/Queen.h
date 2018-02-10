//
// Created by zwpdbh on 10/02/2018.
//

#ifndef PROBLEM_SOLVING_QUEEN_H
#define PROBLEM_SOLVING_QUEEN_H

#include "Board.h"

class Queen {
private:
    int row;
    int col;
    static const Board* boardPtr;
public:
    /**Place a queen in upper-left corner of board*/
    Queen();

    /**place a queen in specific location*/
    Queen(int atRow, int atCol);

    /**return column number*/
    int getCol() const;

    /**return row number*/
    int getRow() const;

    void moveToNextRow();

    bool isUnderAttack() const;

    /**saves a pointer to the board for all queens
     * make all queens have just one board*/
    static void setBoard(const Board* bPtr);
};


#endif //PROBLEM_SOLVING_QUEEN_H
