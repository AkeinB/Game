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

// function that modifies a stat if StatChecker returns true
int StatModifierPitty(int Stat, bool statChecker)
{
    Stat = (statChecker) ? Stat + 5 : Stat;
    
    return Stat;
}

// function that tracks whether the pitty modifier should be applied
int PittyTracker(bool statChecker)
{
    static int count = 0;
    if (statChecker)
    {
        count = 1;
    }
    else
    {
        count = 0;
    }
    return count;
}

// function that applies the pitty modifier to the stat
int PiittyApplier(int stat, int pittyTracker, int statmodifier)
{
    stat = (pittyTracker == 0) ? stat : statmodifier;
    
        return stat;
    
  
}
#endif