#include <iostream>
#include "player.h"
using namespace std;
Player :: Player () {

}
void Player :: setplayername() {
    getline (cin, m_name);
}
string Player :: getplayername() {
    return m_name;
}
 void Player :: setgamescore(int score) {
     game_score = game_score + score;
 }
int Player :: getgamescore() {
    return game_score;
}