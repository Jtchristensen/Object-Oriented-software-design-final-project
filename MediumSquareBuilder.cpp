//
//  MediumSquareBuilder.cpp
//  OOfinalproject
//
//  Created by James Christensen on 4/28/20.
//  Copyright © 2020 James Christensen. All rights reserved.
//


#include "GameBuilder.h"
#include "SimpleSquareRules.cpp"

#include "MediumBoard.cpp"
#include "SquareTile.h"
#include "RandomGeneration.h"
// A  concrete builder class that assembles the parts of a specific type of game - in this case, Medium Square.
// There will be many more of these classes that define different types of games.
class MediumSquareBuilder : public GameBuilder {
    Game* game;
public:
    MediumSquareBuilder() {
        this->game = new Game();
    }

    void buildRules() {
        Rules* simpleSquareRules = new SimpleSquareRules();
        game->setRules(simpleSquareRules);
    }

    void buildBoard() {
        Board* advBoard = new MediumBoard();
        game->setBoard(advBoard);
    }

    void buildTile() {
        Tile* squareTile = new SquareTile();
        game->setTile(squareTile);
    }

    void buildGeneration() {
        Generate* randomGeneration = new RandomGeneration();
        game->setGeneration(randomGeneration);
    }

    Game* getGame() {
        return this->game;
    }
};



