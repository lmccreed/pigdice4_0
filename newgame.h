
#ifndef NEWGAME_H
#define NEWGAME_H
#include "game.h"
#include "player.h"

class NewGame : public Game {
private:
    Player m_player[2];
    Turn m_myturn[2];
    bool toggle = false;
    //void m_player_toggle();
    public:
    NewGame();
    ~NewGame();
    static void display_rules();
    void play_game();
};
#endif //NEWGAME_H
