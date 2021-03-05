#include <iostream>
#include "instant.h"
#include "healing.h"
#include "fireball.h"
#include "notalive.h"

using namespace std;

/*-------------------------------------------/INSTANT/---------------------------------------------*/

void Instant::GetDescription()
{
	cout << "# You can cast Instants when all attackers and defenders have been chosen #" << endl;
}

void Instant::ManaCost()
{
	cout << "# ManaCost: " << this->mana << endl;
}

void Instant::Print_Interface()
{
	cout << "# -> FIREBALL <- | -> HEALING <- #" << endl;
	cout << "#    (press 1)   |   (press 2)   #" << endl;
	cout << endl;
	
	int input;
	cin >> input;
	
	if (input == 1)
	{
		FireBall fb;
		fb.Draw();
		cout << endl;
		fb.GetDescription();
		fb.ManaCost();
		fb.GetDamage();
		fb.Print_Interface();
	}
	
	else if (input == 2)
	{
		Healing heal;
		heal.Draw();
		cout << endl;
		heal.GetDescription();
		heal.ManaCost();
		heal.GetHeal();
		heal.Print_Interface();
	}
	
	else if (input == 0)
	{
		NotAlive notalive;
		notalive.GetDescription();
		cout << endl;
		notalive.Print_Interface();
	}
}

/*-------------------------------------------------------------------------------------------------*/
