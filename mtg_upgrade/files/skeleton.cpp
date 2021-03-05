#include <iostream>
#include "skeleton.h"
#include "creature.h"

using namespace std;

/*-------------------------------------------/SKELETON/--------------------------------------------*/

Skeleton::Skeleton()
{
	this->mana = 4;
	this->force = 5;
	this->health = 2;
}

void Skeleton::GetDescription()
{
	cout << "# Guy who will die the first #" << endl;
}

void Skeleton::Draw()
{
	cout <<	       " -------------------------" << endl;
	cout <<        "|  ---------------------  |" << endl;
	cout <<        "| |			| |" << endl;
	cout <<        "| |  	 ______		| |" << endl;
	cout <<        "| |     /      \\	| |" << endl;
	cout <<	       "| |    |  _  _	|	| |" << endl;
	cout <<        "| | ^ ^	\\|_||_|/ ^ ^ ^  | |" << endl;
	cout <<        "| | | |	 | \\/ |  | | |	| |" << endl;
	cout <<        "| |-------\\__/----------| |" << endl;
	cout <<        "| |   ____|  |____   	| |" << endl;
	cout <<        "| |  / ----||---- \\  	| |" << endl;
	cout <<        "| | / /\\---||---/\\ \\	| |" << endl;
	cout <<        "| | | |	\\--||--/ | |	| |" << endl;
	cout <<        "|  ---------------------  |" << endl;
	cout <<        "|     S C E L E T O N	  |" << endl;
	cout <<        "|   4	-----------  5/2  |" << endl;
	cout <<        "|_________________________|" << endl;
}

void Skeleton::Print_Interface()
{
	cout << "# Press 0 to go back #" << endl;
	int input;
	cin >> input;
	
	if (input == 0)
	{
		Creature creature;
		creature.GetDescription();
		cout << endl;
		creature.Print_Interface();
	}
}

/*----------------------------------------------------------------------------------------------*/
