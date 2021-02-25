#include <iostream>
#include "mtg.h"

using namespace std;

/*-----------------------------------------------------/MAIN/---------------------------------------------------*/

int main()
{
	
logo_print();
	
	int again = 1;

	while (again)
	{

		card_print();
	
		int input;
		cin >> input;
	
		if (input == 1)
		{
			alive_print();
		
			int input;
			cin >> input;
			
			if (input == 1)
			{
				creature_print();
			
				int input;
				cin >> input;

				if (input == 1)
				{
					cat_print();
				}
				else if (input == 2)
				{
					ghost_print();
				}
				else if (input == 3)
				{
					skeleton_print();
				}
	
			}
		
			else if (input == 2)
			{
				plainswalker_print();
	
				darkwizard_print();
			}
		}
	
		else if (input == 2)
		{
			notalive_print();
	
			int input;
			cin >> input;
		
			if (input == 1)
			{
				instant_print();
	
				int input;
				cin >> input;
	
				if (input == 1)
				{
					fireball_print();
				}
	
				else if (input == 2)
				{
					healing_print();
				}
			}
			else if (input == 2)
			{
				land_print();
	
				int input;
				cin >> input;
	
				if (input == 1)
				{
					red_print();
				}
	
				else if (input == 2)
				{
					green_print();
				}
				
				else if (input == 3)
				{
					blue_print();
				}
			}
		}

		cout << "# Wanna begin again? (press 1 or 0) #" << endl;
		cin >> again;
	}
	
	return 0;
}

