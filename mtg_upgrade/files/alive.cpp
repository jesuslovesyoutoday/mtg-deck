#include <iostream>
#include "alive.h"
#include "card.h"
#include "creature.h"
#include "plainswalker.h"

using namespace std;
/*---------------------------------------------/ALIVE/----------------------------------------------*/

void Alive::GetHealth()
{
	cout << "# Health: " << health << endl;
}

void Alive::GetForce()
{
	cout << "# Force: " << force << endl;
}

void Alive::ManaCost()
{
	cout << "# Manacost: " << mana << endl;
}

void Alive::GetDescription()
{
	cout << "# Your army #" << endl;
}

void Alive::Print_Interface()
{
	cout << "# -> CREATURE <- | -> PLAINSWALKER <- #" << endl;
	cout << "#    (press 1)   |     (press 2)      #" << endl;
	cout << endl;
	cout << "# Press 0 to go back #" << endl;
	cout << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		Creature creature;
		creature.GetDescription();
		cout << endl;
		creature.Print_Interface();
	}
	
	else if (input == 2)
	{
		Plainswalker plainswalker;
		plainswalker.GetDescription();
		cout << endl;
		plainswalker.Print_Interface();
	}
	
	else if (input == 0)
	{
		Card card;
		card.GetDescription();
		cout << endl;
		card.Print_Interface();
	}
}

/*--------------------------------------------------------------------------------------------------*/
