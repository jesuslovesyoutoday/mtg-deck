#include <iostream>
#include "darkwizard.h"
#include "plainswalker.h"

using namespace std;

/*-----------------------------------------/DARK_WIZARD/-------------------------------------------*/

DarkWizard::DarkWizard()
{
	this->mana = 10;
	this->force = 15;
	this->health = 8;
}

void DarkWizard::GetDescription()
{
	cout << "# Chilling on the graveyard, prepairing to rule the world #" << endl;
}

void DarkWizard::Draw()
{
	cout <<		" -------------------------" << endl;
	cout <<		"|  ---------------------  |" << endl;
	cout <<		"| |          _*         | |" << endl;
	cout <<		"| |        /|        |  | |" << endl;
	cout <<		"| |      _/#\\_ *     |  | |" << endl;
	cout <<		"| |  |    |0| *#* ---+--| |" << endl;
	cout <<		"| | -+-  /###\\ |     |  | |" << endl;
	cout <<		"| |  |  /#####\\|     |  | |" << endl;
	cout <<		"| |--|-/#######|-----|--| |" << endl;
	cout <<		"| |   /########|     |  | |" << endl;
	cout <<		"| |  |#########\\     |  | |" << endl;
	cout <<		"| | |############/   |  | |" << endl;
	cout <<		"| |   \\######/          | |" << endl;
	cout <<		"|  ---------------------  |" << endl;
	cout <<		"|  D A R K  W I Z A R D   |" << endl;
	cout <<		"|  10----------- 15/8     |" << endl;
	cout <<		"|_________________________|" << endl;
}

void DarkWizard::Print_Interface()
{
	cout << "# Press 0 to go back #" << endl;
	
	int input;
	cin >> input;
	
	if (input == 0)
	{
		Plainswalker plainswalker;
		plainswalker.GetDescription();
		cout << endl;
		plainswalker.Print_Interface();
	}
}
