#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {
private:
    std::string m_name;
    int game_score;
    public:
    Player();
    void setplayername();
    std::string getplayername();
    void setgamescore(int);
    int getgamescore();
};
#endif //PLAYER_H
