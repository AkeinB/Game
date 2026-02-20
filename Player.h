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
        Player(const string& name="", int hitPoints=0, int attackPoints=0, int evadePoints=0)
            : CharacterName(name), HitPoints(hitPoints), AttackPoints(attackPoints), EvadePoints(evadePoints) {} 

        //||====================getters================================||
        string getCharacterName() const
        {
            return CharacterName;
        }

        int getHitPoints() const
        {
            return HitPoints;
        }
        
        int getAttackPoints() const
        {
            return AttackPoints;
        }

        int getEvadePoints() const
        {
            return EvadePoints;
        }
        
        //||====================setters================================||
        void setCharacterName(const string& name)
        {
            CharacterName = name;
        }

        void setHitPoints(int hitPoints)
        {
            HitPoints = hitPoints;
        }

        void setAttackPoints(int attackPoints)
        {
            AttackPoints = attackPoints;
        }

        void setEvadePoints(int evadePoints)
        {
            EvadePoints = evadePoints;
        }
    

    

};
#endif