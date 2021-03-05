#include <iostream>
#include "green.h"
#include "land.h"

using namespace std;

/*-----------------------------------------/GREEN/----------------------------------------------*/

Green::Green()
{
	this->color = 'g';
}

void Green::GetDescription()
{
	cout << "# Forest Graveyard #";
}

void Green::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "| |     GGGGGGGGG       | |" << endl;
	cout << "| |    G         G      | |" << endl;
	cout << "| |   G                 | |" << endl;
	cout << "| |   G                 | |" << endl;
	cout << "| |   G       GGGG      | |" << endl;
	cout << "| |   G           G     | |" << endl;
	cout << "| |    G          G     | |" << endl;
	cout << "| |     GGGGGGGGGG      | |" << endl;
	cout << "| |                     | |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "|    G R E E N  L A N D   |" << endl;
	cout << "|   	-----------       |" << endl;
	cout << "|_________________________|" << endl;
}

void Green::Print_Interface()
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

/*----------------------------------------------------------------------------------------------*/
