#include <iostream>
#include "mtg.h"

using namespace std;

/*-----------------------------------------------------/MAIN/---------------------------------------------------*/


int main()
{
	cout << "	 -------------------------------------------------------------------------------- " << endl;
	cout << "	|										| " << endl;			
	cout << "	|		 ___	    ___	    _____________      _________		| " << endl;		
	cout << "	|		|###\\	   /###|   |#############|    /#########\\		| " << endl;		
	cout << "	|		|####\\	  /####|    #############    |##/     \\##\\		| " << endl;	
	cout << "	|		|#####\\  /#####|   	|###|	     |##|      ###		| " << endl;	
	cout << "	|		|######\\/######|	|###|	     |##|    ____		| " << endl;				
	cout << "	|		|###|\\####/|###|	|###|	     |##|   |####|		| " << endl;
	cout << "	|		|###| \\##/ |###|	|###|	     |##|      |#|		| " << endl;
	cout << "	|		|###|  \\/  |###|	|###|	     \\##\\      |#|		| " << endl;
	cout << "	|		|###|	   |###|	|###|	      \\##\\_____/#/		| " << endl;
	cout << "	|		-----	   -----	-----		########		| " << endl;
	cout << "	|										| " << endl;
	cout << "	|										| " << endl;
	cout <<  "	-------------------------------------------------------------------------------  " << endl;

	cout << endl;
	cout << "# Choose a type of a card #" << endl;
	cout << endl;
	cout << "# -> ALIVE <- | -> NOT_ALIVE <- #" << endl;
	cout << "#  (press 1)  |    (press 2)    #" << endl;
	
	cout << endl;
	cout << endl;
	
	int input;
	cin >> input;

	if (input == 1)
	{
		Alive alive;
		alive.GetDescription();
		cout << endl;

		cout << "# -> CREATURE <- | -> PLAINSWALKER <- #" << endl;
		cout << "#    (press 1)   |     (press 2)      #" << endl;
		cout << endl;
		
		int input;
		cin >> input;
		
		if (input == 1)
		{
			Creature creature;
			creature.GetDescription();
			cout << endl;

			cout << "# -> CAT <- | -> GHOST <- | -> SKELETON <- #" << endl;
			cout << "# (press 1) |   (press 2) |    (press 3)   #" << endl;
			cout << endl;
			
			int input;
			cin >> input;

			if (input == 1)
			{
				Cat cat;
				cat.Draw();
				cout << endl;
				cat.GetDescription();
				cat.ManaCost();
				cat.GetForce();
				cat.GetHealth();
			}
			else if (input == 2)
			{
				Ghost ghost;
				ghost.Draw();
				cout << endl;
				ghost.GetDescription();
				ghost.ManaCost();
				ghost.GetForce();
				ghost.GetHealth();
			}
			else if (input == 3)
			{
				Skeleton skeleton;
				skeleton.Draw();
				cout << endl;
				skeleton.GetDescription();
				skeleton.ManaCost();
				skeleton.GetForce();
				skeleton.GetHealth();
			}

		}

		else if (input == 2)
		{
			Plainswalker plw;
			plw.GetDescription();
			cout << endl;

			DarkWizard dw;
			dw.Draw();
			cout << endl;
			dw.GetDescription();
			dw.ManaCost();
			dw.GetForce();
			dw.GetHealth();
		}
	}

	else if (input == 2)
	{
		NotAlive na;
		na.GetDescription();
		cout << endl;

		cout << "# -> INSTANT <- | -> LAND <- #" << endl;
		cout << "#   (press 1)   |  (press 2) #" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			Instant instant;
			instant.GetDescription();
			cout << endl;

			cout << "# -> FIREBALL <- | -> HEALING <- #" << endl;
			cout << "#    (press 1)   |   (press 2)   #" << endl;

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
			}

			else if (input == 2)
			{
				Healing healing;
				healing.Draw();
				cout << endl;
				healing.GetDescription();
				healing.ManaCost();
				healing.GetHeal();
			}
		}
		else if (input == 2)
		{
			Land land;
			land.GetDescription();
			cout << endl;

			cout << "# -> RED <- | -> GREEN <- | -> BLUE <- #" << endl;
			cout << "# (press 1) |   (press 2) |  (press 3) #" << endl;

			int input;
			cin >> input;

			if (input == 1)
			{
				Red red;
				red.Draw();
				cout << endl;
				red.GetDescription();
			}

			else if (input == 2)
			{
				Green green;
				green.Draw();
				cout << endl;
				green.GetDescription();
			}
			
			else if (input == 3)
			{
				Blue blue;
				blue.Draw();
				cout << endl;
				blue.GetDescription();
			}
		}
	}
	
	return 0;
}
