#include <iostream>
#include "card.h"
#include "alive.h"
#include "notalive.h"

using namespace std;

/*---------------------------------------/CARD/--------------------------------------*/

void Card::GetDescription()
{
	cout << "# Choose a type of a card #" << endl;
	cout << endl;
}

void Card::Print_Interface()
{
	cout << "# -> ALIVE <- | -> NOT_ALIVE <- #" << endl;
	cout << "#  (press 1)  |    (press 2)    #" << endl;
	cout << endl;
	cout << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		Alive alive;
		alive.GetDescription();
		cout << endl;
		alive.Print_Interface();
	}
	
	else if (input == 2)
	{
		NotAlive notalive;
		notalive.GetDescription();
		cout << endl;
		notalive.Print_Interface();
	}
}

/*-------------------------------------------------------------------------------------*/
