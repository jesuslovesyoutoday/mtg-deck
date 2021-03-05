#include <iostream>
#include "ghost.h"
#include "creature.h"

using namespace std;

/*-------------------------------------------/GHOST/-----------------------------------------------*/

Ghost::Ghost()
{
	this->mana = 2;
	this->force = 2;
	this->health = 4;
}

void Ghost::GetDescription()
{
	cout << "# Dancing in the moonlight #" << endl;
}

void Ghost::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |*	*     *	   ***	| |" << endl;
	cout << "| |  *	   ===	  *****	| |" << endl;
	cout << "| |    * / # #|   ***	| |" << endl;
	cout << "| | *   /     |*    *	| |" << endl;
	cout << "| |    /       \\  *	| |" << endl;
	cout << "| |---/ /    \\  \\-------| |" << endl;
	cout << "| | =/ /  |   \\ \\=	| |" << endl;
	cout << "| |  ==   |    ===	| |" << endl;
	cout << "| |    === ====		| |" << endl;
	cout << "| |	     		| |" << endl;
	cout << "| |			| |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| 	 G H O S T  	  |" << endl;
	cout << "|   2	-----------  2/4  |" << endl;
	cout << "|_________________________|" << endl;
}

void Ghost::Print_Interface()
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
