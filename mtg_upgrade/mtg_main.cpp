#include <iostream>
#include "files/card.h"
#include "files/logo.h"

using namespace std;

/*-----------------------------------------------------/MAIN/---------------------------------------------------*/

int main()
{
	logo_print();
	
	Card card;
	card.GetDescription();
	card.Print_Interface();

	return 0;
}

/*-------------------------------------------------------------------------------------------------------------*/
