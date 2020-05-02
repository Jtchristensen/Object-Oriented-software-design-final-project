//
//  Game.h
//  OOfinalproject
//
//  Created by James Christensen on 4/28/20.
//  Copyright © 2020 James Christensen. All rights reserved.
//

#ifndef Game_h
#define Game_h
#include <iostream>
#include "Rules.h"
#include "Board.h"
#include "Tile.h"
#include "Generate.h"
using namespace std;
// The concrete class that is based on the GamePlan interface. Defines getters and setters for classes Rules,
// Board, Tile, and Generation.
class Game {
private:
    Rules* gameRules;
    Board* gameBoard;
    Tile* gameTile;
    Generate* gameGeneration;
public:
// Setters and getters //
    void setRules(Rules*);
    void getRules();
    void setBoard(Board*);
    void getBoard();
    void setTile(Tile*);
    void getTile();
    void setGeneration(Generate*);
    void getGeneration();


    Board* rboard();//returns the board

    int playGame(); // handles user input to make changes to the game
};

#endif /* Game_h */
