#include <iostream>
#include "land.h"
#include "notalive.h"
#include "red.h"
#include "green.h"
#include "blue.h"

using namespace std;

/*-------------------------------------------/LAND/---------------------------------------------*/

void Land::GetColor()
{
	if (this->color == 'r')
	{
		cout << "Red" << endl;
	}
	else if (this->color == 'g')
	{
		cout << "Green" << endl;
	}
	else if (this->color == 'b')
	{
		cout << "Blue" << endl;
	}
}

void Land::GetDescription()
{
	cout << "# Cast lands to get mana. You can cast only one land at the beginning of your turn #" << endl;
}

void Land::Print_Interface()
{
	cout << "# -> RED <- | -> GREEN <- | -> BLUE <- #" << endl;
	cout << "# (press 1) |   (press 2) |  (press 3) #" << endl;
	cout << endl;
	cout << "# Press 0 to go back #" << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		Red red;
		red.Draw();
		cout << endl;
		red.GetDescription();
		red.Print_Interface();
	}
	
	else if (input == 2)
	{
	Green green;
	green.Draw();
	cout << endl;
	green.GetDescription();
	green.Print_Interface();
	}
	
	else if (input == 3)
	{
	Blue blue;
	blue.Draw();
	cout << endl;
	blue.GetDescription();
	blue.Print_Interface();
	}
	
	else if (input == 0)
	{
		NotAlive notalive;
		notalive.GetDescription();
		cout << endl;
		notalive.Print_Interface();
	}
}

/*--------------------------------------------------------------------------------------------------*/
