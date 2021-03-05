#include <iostream>
#include "notalive.h"
#include "card.h"
#include "instant.h"
#include "land.h"

using namespace std;

/*------------------------------------------/NOT_ALIVE/--------------------------------------------*/

void NotAlive::GetDescription()
{
	cout << "# Magic stuff #" << endl;
}

void NotAlive::Print_Interface()
{
	cout << "# -> INSTANT <- | -> LAND <- #" << endl;
	cout << "#   (press 1)   |  (press 2) #" << endl;
	cout << endl;
	cout << "# Press 0 to go back #" << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		Instant instant;
		instant.GetDescription();
		cout << endl;
		instant.Print_Interface();
	}
	
	else if (input == 2)
	{
		Land land;
		land.GetDescription();
		cout << endl;
		land.Print_Interface();
	}
	
	else if (input == 0)
	{
		Card card;
		card.GetDescription();
		cout << endl;
		card.Print_Interface();
	}
}

/*------------------------------------------------------------------------------------------------*/
