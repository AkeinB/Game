#include <string>
#include <iostream>
#include "StatsGenerator.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;
#ifndef PLAYER_H
#define PLAYER_H



class Player
{
    private:
        string CharacterName;
        int HitPoints;
        int AttackPoints;
        int EvadePoints;
    public:
        // Constructor
        Player(const string& name, int hitPoints, int attackPoints, int evadePoints)
            : CharacterName(name), HitPoints(hitPoints), AttackPoints(attackPoints), EvadePoints(evadePoints) {} 
        

};
#endif