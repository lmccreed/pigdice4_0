#ifndef TURN_H
#define TURN_H
#include "die.h"
class Turn {
private:
    bool turn_over;
    int turn_count;
    char choice;
    int die_value;
    int score_this_turn;

    void Hold(bool& turn_over);
    void Roll(int& score_this_turn, bool& turn_over);

    public :
        Turn() {
        this->turn_over=false;
        this->turn_count = 0;
        this->choice;
        this->die_value = 0;
        this->score_this_turn = 0;
        }
    void take_turn (int& game_score, bool & game_over) ;
    int getturn ();
};

#endif //TURN_H
