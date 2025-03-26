#include <iostream>
#include "newgame.h"
using namespace std;

void NewGame::display_rules() {
    cout << "Let's Play PIG Dice!\n\n* See which player will reach 50 points in the fewest turns.\n* Turn ends when you hold or roll a 1.\n* If you roll a 1, you lose all points for the turn. \n* If you hold, you save all points for the turn.\n" << endl;
}
NewGame:: NewGame(){}
NewGame:: ~NewGame(){}
void NewGame :: play_game() {
    NewGame::display_rules();
    cout<< "Enter player1's name: " << endl;
    m_player[toggle].setplayername();
    toggle=!toggle;
    cout<< "Enter player2's name:" << endl;
    m_player[toggle].setplayername();
    cout <<endl << endl;
    game_over=false;
    while (game_over==false) {
        toggle=!toggle;
        cout << m_player[toggle].getplayername()<< " (Score:"<< m_player[toggle].getgamescore()<< ") - ";
        m_myturn[toggle].take_turn(game_score, game_over);
        int scoreturn = m_myturn[toggle].getscoreturn();
        m_player[toggle].setgamescore(scoreturn);
        cout << m_player[toggle].getplayername()<<"'s total score:" << m_player[toggle].getgamescore() << endl;
        cout << endl;
        if (m_player[toggle].getgamescore() >= 50) {
            game_over=true;
        }
    }

    cout << "Congratulations " << m_player[toggle].getplayername() << " you're the winner!\n";
    cout << "You had a final score of " << m_player[toggle].getgamescore() << " points after "<< m_myturn[toggle].getturn() <<" turns!\n\n";
    cout <<"THANKS FOR PLAYING!";
}
