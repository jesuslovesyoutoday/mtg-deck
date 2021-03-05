#include <iostream>
#include "red.h"
#include "land.h"

using namespace std;

/*----------------------------------------------/RED/-------------------------------------------*/

Red::Red()
{
	this->color = 'r';
}

void Red::GetDescription()
{
	cout << "# Neon Gravestones #" << endl;
}

void Red::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |       RRRRR         | |" << endl;
	cout << "| |      R     R        | |" << endl;
	cout << "| |      R     R        | |" << endl;
	cout << "| |      RRRRRR         | |" << endl;
	cout << "| |      R     R        | |" << endl;
	cout << "| |      R      R       | |" << endl;
	cout << "| |      R       R      | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "|     R E D  L A N D	  |" << endl;
	cout << "|   	-----------       |" << endl;
	cout << "|_________________________|" << endl;
}

void Red::Print_Interface()
{
	cout << "# Press 0 to go back #" << endl;
	
	int input;
	cin >> input;
	
	if (input == 0)
	{
		Land land;
		land.GetDescription();
		cout << endl;
		land.Print_Interface();
	}
}

/*------------------------------------------------------------------------------------------------*/
