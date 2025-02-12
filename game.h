#ifndef GAME_H
#define GAME_H

#include "location.h"
#include "player.h"
#include "crystal.h"
#include "healthcapsule.h"
#include "Kingcrawler.h"
#include "princess.h"
#include "shield.h"
#include "nightcrawler.h"
#include "sword.h"

class Game {
private:
    Location*** world;
    Player p;
    int rows;
    int cols;
    int playerRow;
    int playerCol;

public:
    Game();

    void setUpGame(const string& filename);
    void drawGame();
    void playGame();
    ~Game();
};

#endif 
