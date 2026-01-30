#include <iostream>
#include <cstdlib>
#ifndef STATSGENERATOR_H
#define STATSGENERATOR_H


//generates a random stat between 5 and 20
int StatRoller()
{
    int stat = rand() % 16 + 5; // 16 possible values (5 to 20 inclusive)

    //stat = (stat < 5) ? stat = 5 : stat;

    return stat;
}

// function that evaluates if a stat is at its minimum value (5)
bool StatChecker( int stat)
{
    bool valid = (stat == 5);

    return valid;
}

// function that modifies a stat if StaterChecker returns true
int StatModifier(int Stat, bool statChecker)
{
    Stat = (statChecker) ? Stat + 5 : Stat;
    
    return Stat;
}


#endif