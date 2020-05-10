#include "Rules.h"
#include "SquareBoard.h"

#ifndef MINESWEEPERBUILDER_RULES_H
#define MINESWEEPERBUILDER_RULES_H
// An interface that define what all SquareRules should have. Can be inherited by SimpleSquareRules
//and other derived SquareRules classes.
class SquareRules : public Rules {
    SquareBoard* gameBoard;
    int row;
    int col;
    int flipTileNoInput(SquareTile* t); // accessed inside flipTile()

public:
    SquareRules();
    ~SquareRules();

    void rows_and_columns();

    SquareBoard* getBoard();
    void setBoard(SquareBoard* b);

    void setRow(int r);
    int getRow();
    int getCol();
    void setCol(int c);

    void printRules();

    void flipTile();
    void flagTile();
    void unflagTile();
};

#endif //MINESWEEPERBUILDER_RULES_H