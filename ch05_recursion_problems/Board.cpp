//
// Created by zwpdbh on 10/02/2018.
//

/**Try to finish the rest of the implementation*/

#include "Board.h"

bool Board::placeQueen(Queen *queenPtr) {
    bool result = false;

    if (queenPtr->getCol() >= BOARD_SIZE) {
        delete queenPtr;
        return true;
    }

    bool isQueenPlaced = false;
    while (!isQueenPlaced && queenPtr->getRow() < BOARD_SIZE) {
        // if the queen can be attacked, try moving it to the next row in the current column
        if (queenPtr->isUnderAttack()) {
            queenPtr->moveToNextRow();
        } else {
            // put this queen on the board and try putting a new queen in the first row of the next column
            setQueen(queenPtr);
            Queen* newQueenPtr = new Queen(0, queenPtr->getCol() + 1);
            isQueenPlaced = placeQueen(newQueenPtr);

            if (!isQueenPlaced) {
                delete newQueenPtr;
                removeQueen();
                queenPtr->moveToNextRow();
            }
        }
    }
    return isQueenPlaced;
}