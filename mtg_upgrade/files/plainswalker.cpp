#include <iostream>
#include "plainswalker.h"
#include "darkwizard.h"
#include "alive.h"

using namespace std;

/*-------------------------------------------/PLAINSWALKER/----------------------------------------*/

void Plainswalker::GetDescription()
{
	cout << "# The leader of your army #" << endl;
}

void Plainswalker::Print_Interface()
{
	cout << "# -> DARKWIZARD <- #" << endl;
	cout << "#     (press 1)    #" << endl;
	cout << endl;
	cout << "# Press 0 to go back #" << endl;
	cout <<  endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		DarkWizard darkwizard;
		darkwizard.GetDescription();
		darkwizard.ManaCost();
		darkwizard.GetForce();
		darkwizard.GetHealth();
		darkwizard.Draw();
		cout << endl;
		darkwizard.Print_Interface();
	}	
	
	else if (input == 0)
	{
		Alive alive;
		alive.GetDescription();
		cout << endl;
		alive.Print_Interface();
	}
}

/*-------------------------------------------------------------------------------------------------*/
