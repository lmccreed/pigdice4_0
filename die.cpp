#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;

   Die:: Die (int sides) {
        this->numberofsides = sides;
    }
   Die:: Die() {
        this->numberofsides = 6;
    }
    void Die:: rolldie() {
        srand(time(0));
        dievalue= rand() % numberofsides +1;
    }
    int Die:: getdievalue() {
        return dievalue;
    }
