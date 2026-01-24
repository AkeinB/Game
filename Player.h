#include <iostream>
#include <string>
#include <vector>
#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    private:
        std::string CharacterName;
        int HitPoints;
        int AttackPoints;
        int EvadePoints;
    public:
        // Constructor
        Player(std::string& name, int hitPoints, int attackPoints, int evadePoints)
            : CharacterName(name), HitPoints(hitPoints), AttackPoints(attackPoints), EvadePoints(evadePoints) {}    
};
#endif