#include <iostream>
#include "turn.h"
using namespace std;

//void Turn :: get_turn_count {
    //return  TURN_COUNT;
       // }

void Turn::Hold(bool& turn_over) {
    turn_over=true;
}
void Turn::Roll(int& score_this_turn, bool& turn_over) {
    Die mydie;
    mydie.rolldie();
    cout << "Die: " << mydie.getdievalue() << endl;
    if (mydie.getdievalue()==1) {
        score_this_turn = 0;
        cout << "Turn over. No score.\n";
        turn_over=true;
    }
    else {
        score_this_turn = score_this_turn + mydie.getdievalue();
    }
}
void Turn:: take_turn (int& game_score, bool & game_over) {
    Turn turn;
    while (game_over == false) {
    score_this_turn = 0;
    turn_count++;
    cout << "\nTURN " << turn_count << endl;
    turn_over =false;
    while (!turn_over) {
        char choice;
        cout << "roll or hold? (r/h): ";
        cin >> choice;
        if (choice == 'r') {
            turn.Roll(score_this_turn, turn_over);
        }
        else if (choice == 'h') {
            turn.Hold(turn_over);
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    }
        cout << "Score for this turn:" << score_this_turn << endl;
        game_score = game_score + score_this_turn;
        cout << "Total score:" << game_score << endl;
        if (game_score >= 20) {
            game_over=true;
        }
    }
}
int Turn:: getturn () {
    return turn_count;
}



