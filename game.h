#ifndef GAME_H
#define GAME_H

#include "turn.h"

class Game {
protected:
    bool game_over;
    int game_score;
    Turn myturn;
public:
    Game() {
        this->game_over=false;
        this->game_score = 0;
    };
    void display_rules ();
    void play_game();

};

#endif //GAME_H
