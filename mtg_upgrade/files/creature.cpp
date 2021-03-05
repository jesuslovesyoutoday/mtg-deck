#include <iostream>
#include "creature.h"
#include "alive.h"
#include "cat.h"
#include "ghost.h"
#include "skeleton.h"

using namespace std;

/*------------------------------------------/CREATURE/----------------------------------------------*/

void Creature::GetDescription()
{
	cout << "# Creatures can attack, defeat and be attacked #" << endl;
}

void Creature::Print_Interface()
{
	cout << "# -> CAT <- | -> GHOST <- | -> SKELETON <- #" << endl;
	cout << "# (press 1) |   (press 2) |    (press 3)   #" << endl;
	cout << endl;
	cout << "# Press 0 to go back #" << endl;
	cout <<  endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		Cat cat;
		cat.Draw();
		cout << endl;
		cat.GetDescription();
		cat.ManaCost();
		cat.GetForce();
		cat.GetHealth();
		cout << endl;
		cat.Print_Interface();
	}
	
	else if (input == 2)
	{
		Ghost ghost;
		ghost.Draw();
		cout << endl;
		ghost.GetDescription();
		ghost.ManaCost();
		ghost.GetForce();
		ghost.GetHealth();
		cout << endl;
		ghost.Print_Interface();
	}
	
	else if (input == 3)
	{
		Skeleton skeleton;
		skeleton.Draw();
		cout << endl;
		skeleton.GetDescription();
		skeleton.ManaCost();
		skeleton.GetForce();
		skeleton.GetHealth();
		cout << endl;
		skeleton.Print_Interface();
	}
	
	else if (input == 0)
	{
		Alive alive;
		alive.GetDescription();
		cout << endl;
		alive.Print_Interface();
	}
}

/*------------------------------------------------------------------------------------------------*/
