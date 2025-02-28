#include <iostream>
#include "game.h"
#include "turn.h"

using namespace std;

int main(){
    Game mygame;
    mygame.display_rules();
    mygame.play_game();
    return 0;
}
