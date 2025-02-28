#ifndef DIE_H
#define DIE_H

class Die {
    int dievalue=0;
    int numberofsides;
public:
    Die (int sides);
    Die();
    void rolldie();
    int getdievalue();
};

#endif //DIE_H
