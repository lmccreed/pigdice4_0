#include <iostream>
#include "game.h"
using namespace std;

void Game::display_rules (){
        cout << "Let's Play PIG Dice!\n" << endl;
        cout << "* See how many turns it takes you to get to 20.\n* Turn ends when you hold or roll a 1.\n* If you roll a 1, you loose all points for the turn.\n* If you hold, you save all points for the turn." << endl;
    }


void Game::play_game() {
        game_over=false;
        myturn.take_turn(game_score, game_over);

        cout << "\nYou finished with a final score of 20 or more in " << myturn.getturn() << " turns!";
    }