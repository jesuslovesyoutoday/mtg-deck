#include <iostream>
#include "cat.h"
#include "creature.h"

using namespace std;

/*---------------------------------------------/CAT/------------------------------------------------*/

Cat::Cat()
{
	this->mana = 5;
	this->force = 3;
	this->health = 9;
}

void Cat::GetDescription()
{
	cout << "# Whitch's friend #" << endl;
}

void Cat::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------   |" << endl;
	cout << "| | 		   **	 | |" << endl;
	cout << "| |  	  	     **	 | |" << endl;
	cout << "| |        	     *** | |" << endl;
	cout << "| | 	   /\\_/\\     **  | |" << endl;
	cout << "| |   	  =|* *|=  ** 	 | |" << endl;
	cout << "| |	  /     \\	 | |" << endl;
	cout << "| |------| 	 |--/\\---| |" << endl;
	cout << "| |      \\______/__/ /   | |" << endl;
	cout << "| |  	  /     \\---/	 | |" << endl;
	cout << "| |  	 /  RIP  \\	 | |" << endl;
	cout << "| |	 |       |	 | |" << endl;
	cout << "|  ---------------------   |" << endl;
	cout << "| 	    C A T	   |" << endl;
	cout << "|   5	 -----------  3/9  |" << endl;
	cout << "|__________________________|" << endl;
}

void Cat::Print_Interface()
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

/*---------------------------------------------------------------------------------------------------*/
