#include <iostream>
#include <string>
#include <vector>
#ifndef PLAYER_H
#define PLAYER_H

class Boss
{
    private:
        std::string BossName;
        int HitPoints;
        int AttackPoints;
        int EvadePoints;
    public:
        // Constructor
        Boss(std::string& name, int hitPoints, int attackPoints, int evadePoints)
            : BossName(name), HitPoints(hitPoints), AttackPoints(attackPoints), EvadePoints(evadePoints) {}
};
#endif