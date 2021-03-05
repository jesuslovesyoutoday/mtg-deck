#include  <iostream>
#include "fireball.h"
#include "instant.h"

using namespace std;

/*----------------------------------------/FIREBALL/-----------------------------------------------*/

FireBall::FireBall()
{
	this->mana = 3;
	this->damage = 3;
}

void FireBall::GetDescription()
{
	cout << "# Deals damage to the target creature #" << endl;
}

void FireBall::GetDamage()
{
	cout << "# Damage: " << endl;
}

void FireBall::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |            *        | |" << endl;
	cout << "| |     *    /          | |" << endl;
	cout << "| |       /   *         | |" << endl;
	cout << "| |   *  |\\  /    *     | |" << endl;
	cout << "| |     /  \\/|  /       | |" << endl;
	cout << "| |    #***# /          | |" << endl;
	cout << "| |   #*****# *         | |" << endl;
	cout << "| |    #***#            | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "|     F I R E B A L L	  |" << endl;
	cout << "|   	-----------       |" << endl;
	cout << "|_________________________|" << endl;
}

void FireBall::Print_Interface()
{
	cout << "# Press 0 to go back #" << endl;
	
	int input;
	cin >> input;
	
	if (input == 0)
	{
		Instant instant;
		instant.GetDescription();
		cout << endl;
		instant.Print_Interface();
	}
}

/*---------------------------------------------------------------------------------------------------*/
