#include <iostream>
#include "game.h"

int main() {
    GameOfLife game;
    game.configureRules(); // Allow user to set birth/survival rules
    game.initialize();     // Let user set up initial board
    while (game.run()) {  // Loop game steps until user quits
        game.update();
        game.display();
    }
    return 0;
}
