#include <iostream>
#include "healing.h"
#include "instant.h"

using namespace std;

/*-------------------------------------------/HEALING/---------------------------------------------*/

Healing::Healing()
{
	this->heal  = 3;
	this->mana = 3;
}

void Healing::GetDescription()
{
	cout << "# Add hp to a target creature #" << endl;
}

void Healing::GetHeal()
{
	cout << "# + " << this->heal << " hp #" << endl;
}

void Healing::Draw()

{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |         **   ___    | |" << endl;
	cout << "| |        **** /  _\\   | |" << endl;
	cout << "| |         **-__/      | |" << endl;
	cout << "| |         ||          | |" << endl;
	cout << "| |        |##|         | |" << endl;
	cout << "| |       /####\\        | |" << endl;
	cout << "| |      |######|       | |" << endl;
	cout << "| |       \\####/        | |" << endl;
	cout << "| |        ====         | |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "|      H E A L I N G	  |" << endl;
	cout << "|   	-----------       |" << endl;
	cout << "|_________________________|" << endl;
}

void Healing::Print_Interface()
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
