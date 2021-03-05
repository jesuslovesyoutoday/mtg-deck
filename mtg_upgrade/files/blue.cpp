#include <iostream>
#include "blue.h"
#include "land.h"

using namespace std;

/*------------------------------------------/BLUE/---------------------------------------------*/

Blue::Blue()
{
	this->color = 'b';
}

void Blue::GetDescription()
{
	cout << "# Atlantis' Graveyard #" << endl;
}

void Blue::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |    BBBBBB           | |" << endl;
	cout << "| |    B     B          | |" << endl;
	cout << "| |    B     B          | |" << endl;
	cout << "| |    BBBBBBBB         | |" << endl;
	cout << "| |    B       B        | |" << endl;
	cout << "| |    B       B        | |" << endl;
	cout << "| |    BBBBBBBB         | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "|    B L U E   L A N D    |" << endl;
	cout << "|   	-----------       |" << endl;
	cout << "|_________________________|" << endl;
}

void Blue::Print_Interface()
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

/*---------------------------------------------------------------------------------------------*/
