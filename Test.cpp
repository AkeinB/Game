#include <iostream>
#include "Player.h"
#include "StatsGenerator.h"
using namespace std;

    




int main()
{
    Player* player1 = new Player;
    
    cout << "Enter character name: ";
    string name;
    cin >> name;

    player1->setCharacterName(name);

    cout << "Generating stats for " << player1->getCharacterName() << "..." << endl;


    return 0;
} 