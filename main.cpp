#include "player.h"
#include "crystal.h"
#include "location.h"
#include "game.h"
#include "powermax.h"

#include <iostream>

using namespace std;

int main() {
    Game game;
    //Player player("Tanjira", 28);
    Location location('*');
    Crystal crystal;
    
    // cout << "Draw:"<<endl;
    // location.draw();
    // crystal.draw();
    // cout << endl;

    // cout << "Visited:"<<endl;
    // location.visit(player);
    // crystal.visit(player);
    // cout<<endl;
    
    // //cout << "Crystal: ";
    // cout << "draw 2nd:"<<endl;
    // crystal.draw();
    // crystal.setTaken(true);
    // cout<<endl;

    // cout << "Draw final:"<<endl;
    // location.draw();
    // crystal.draw();
    // cout << endl;

    game.playGame();

    return 0;
}

