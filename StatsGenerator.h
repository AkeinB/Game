#include <iostream>
#include <cstdlib>
#ifndef STATSGENERATOR_H
#define STATSGENERATOR_H

int StatRoller()
{
    int stat = rand() % 20 + 1;

    if (stat < 5)
        {
        stat = 5;
        }

    return stat;
}

bool StatChecker( int stat)
{
    bool valid = (stat <= 5) ? true : false;

    return valid;
}

int StatApplier(int Stat, bool boost)
{
    if (boost)
    {
        Stat += 5;
    }
    return Stat;
}


#endif