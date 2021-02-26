#include <iostream>
#include "mtg.h"
using namespace std;

/*---------------------------------------------/ALIVE/----------------------------------------------*/

void Alive::GetHealth()
{
	cout << "# Health: " << health << endl;
}

void Alive::GetForce()
{
	cout << "# Force: " << force << endl;
}

void Alive::ManaCost()
{
	cout << "# Manacost: " << mana << endl;
}

void Alive::GetDescription()
{
	cout << "# Your army #" << endl;
}

/*------------------------------------------/CREATURE/----------------------------------------------*/

void Creature::GetDescription()
{
	cout << "# Creatures can attack, defeat and be attacked #" << endl;
}

/*---------------------------------------------/CAT/------------------------------------------------*/

Cat::Cat()
{
	this->mana = 5;
	this->force = 3;
	this->health = 9;
}

void Cat::GetDescription()
{
	cout << "# Whitch's friend #" << endl;
}

void Cat::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------   |" << endl;
	cout << "| | 		   **	 | |" << endl;
	cout << "| |  	  	     **	 | |" << endl;
	cout << "| |        	     *** | |" << endl;
	cout << "| | 	   /\\_/\\     **  | |" << endl;
	cout << "| |   	  =|* *|=  ** 	 | |" << endl;
	cout << "| |	  /     \\	 | |" << endl;
	cout << "| |------| 	 |--/\\---| |" << endl;
	cout << "| |      \\______/__/ /   | |" << endl;
	cout << "| |  	  /     \\---/	 | |" << endl;
	cout << "| |  	 /  RIP  \\	 | |" << endl;
	cout << "| |	 |       |	 | |" << endl;
	cout << "|  ---------------------   |" << endl;
	cout << "| 	    C A T	   |" << endl;
	cout << "|   5	 -----------  3/9  |" << endl;
	cout << "|__________________________|" << endl;
}

/*-------------------------------------------/GHOST/-----------------------------------------------*/

Ghost::Ghost()
{
	this->mana = 2;
	this->force = 2;
	this->health = 4;
}

void Ghost::GetDescription()
{
	cout << "# Dancing in the moonlight #" << endl;
}

void Ghost::Draw()
{
	cout << " -------------------------" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| |*	*     *	   ***	| |" << endl;
	cout << "| |  *	   ===	  *****	| |" << endl;
	cout << "| |    * / # #|   ***	| |" << endl;
	cout << "| | *   /     |*    *	| |" << endl;
	cout << "| |    /       \\  *	| |" << endl;
	cout << "| |---/ /    \\  \\-------| |" << endl;
	cout << "| | =/ /  |   \\ \\=	| |" << endl;
	cout << "| |  ==   |    ===	| |" << endl;
	cout << "| |    === ====		| |" << endl;
	cout << "| |	     		| |" << endl;
	cout << "| |			| |" << endl;
	cout << "|  ---------------------  |" << endl;
	cout << "| 	 G H O S T  	  |" << endl;
	cout << "|   2	-----------  2/4  |" << endl;
	cout << "|_________________________|" << endl;
}

/*-------------------------------------------/SKELETON/--------------------------------------------*/

Skeleton::Skeleton()
{
	this->mana = 4;
	this->force = 5;
	this->health = 2;
}

void Skeleton::GetDescription()
{
	cout << "# Guy who will die the first #" << endl;
}

void Skeleton::Draw()
{
	cout <<	       " -------------------------" << endl;
	cout <<        "|  ---------------------  |" << endl;
	cout <<        "| |			| |" << endl;
	cout <<        "| |  	 ______		| |" << endl;
	cout <<        "| |     /      \\	| |" << endl;
	cout <<	       "| |    |  _  _	|	| |" << endl;
	cout <<        "| | ^ ^	\\|_||_|/ ^ ^ ^  | |" << endl;
	cout <<        "| | | |	 | \\/ |  | | |	| |" << endl;
	cout <<        "| |-------\\__/----------| |" << endl;
	cout <<        "| |   ____|  |____   	| |" << endl;
	cout <<        "| |  / ----||---- \\  	| |" << endl;
	cout <<        "| | / /\\---||---/\\ \\	| |" << endl;
	cout <<        "| | | |	\\--||--/ | |	| |" << endl;
	cout <<        "|  ---------------------  |" << endl;
	cout <<        "|     S C E L E T O N	  |" << endl;
	cout <<        "|   4	-----------  5/2  |" << endl;
	cout <<        "|_________________________|" << endl;
}

/*-------------------------------------------/PLAINSWALKER/----------------------------------------*/

void Plainswalker::GetDescription()
{
	cout << "# The leader of your army #" << endl;
}

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

/*------------------------------------------/NOT_ALIVE/--------------------------------------------*/

void NotAlive::GetDescription()
{
	cout << "# Magic stuff #" << endl;
}

/*-------------------------------------------/INSTANT/---------------------------------------------*/

void Instant::GetDescription()
{
	cout << "# You can cast Instants when all attackers and defenders have been chosen #" << endl;
}

void Instant::ManaCost()
{
	cout << "# ManaCost: " << this->mana << endl;
}

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

/*-------------------------------------------/LAND/---------------------------------------------*/

void Land::GetColor()
{
	if (this->color == 'r')
	{
		cout << "Red" << endl;
	}
	else if (this->color == 'g')
	{
		cout << "Green" << endl;
	}
	else if (this->color == 'b')
	{
		cout << "Blue" << endl;
	}
}

void Land::GetDescription()
{
	cout << "# Cast lands to get mana. You can cast only one land at the beginning of your turn #" << endl;
}

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

/*--------------------------------/INTERFACE_FUNCTIONS/----------------------------------------*/

void logo_print()
{
	cout << "	 -------------------------------------------------------------------------------- " << endl;
	cout << "	|									         | " << endl;			
	cout << "	|		 ___	    ___	    _____________      _________	         | " << endl;		
	cout << "	|		|###\\	   /###|   |#############|    /#########\\	         | " << endl;		
	cout << "	|		|####\\	  /####|    #############    |##/     \\##\\	         | " << endl;	
	cout << "	|		|#####\\  /#####|   	|###|	     |##|      ###	         | " << endl;	
	cout << "	|		|######\\/######|	|###|	     |##|    ____	         | " << endl;				
	cout << "	|		|###|\\####/|###|	|###|	     |##|   |####|	         | " << endl;
	cout << "	|		|###| \\##/ |###|	|###|	     |##|      |#|	         | " << endl;
	cout << "	|		|###|  \\/  |###|	|###|	     \\##\\      |#|	         | " << endl;
	cout << "	|		|###|	   |###|	|###|	      \\##\\_____/#/	         | " << endl;
	cout << "	|		-----	   -----	-----		########	         | " << endl;
	cout << "	|									         | " << endl;
	cout << "	|									         | " << endl;
	cout <<  "	-------------------------------------------------------------------------------  " << endl;
	cout << endl;

}

void card_print()
{
	cout << "# Choose a type of a card #" << endl;
	cout << endl;
	cout << "# -> ALIVE <- | -> NOT_ALIVE <- #" << endl;
	cout << "#  (press 1)  |    (press 2)    #" << endl;
	cout << endl;
	cout << endl;
}

void alive_print()
{
	Alive alive;
	alive.GetDescription();
	cout << endl;

	cout << "# -> CREATURE <- | -> PLAINSWALKER <- #" << endl;
	cout << "#    (press 1)   |     (press 2)      #" << endl;
	cout << endl;
}

void creature_print()
{
	Creature creature;
	creature.GetDescription();
	cout << endl;

	cout << "# -> CAT <- | -> GHOST <- | -> SKELETON <- #" << endl;
	cout << "# (press 1) |   (press 2) |    (press 3)   #" << endl;
	cout << endl;
}

void cat_print()
{
	Cat cat;
	cat.Draw();
	cout << endl;
	cat.GetDescription();
	cat.ManaCost();
	cat.GetForce();
	cat.GetHealth();
}

void ghost_print()
{
	Ghost ghost;
	ghost.Draw();
	cout << endl;
	ghost.GetDescription();
	ghost.ManaCost();
	ghost.GetForce();
	ghost.GetHealth();
}

void skeleton_print()
{
	Skeleton skeleton;
	skeleton.Draw();
	cout << endl;
	skeleton.GetDescription();
	skeleton.ManaCost();
	skeleton.GetForce();
	skeleton.GetHealth();
}

void plainswalker_print()
{
	Plainswalker plw;
	plw.GetDescription();
	cout << endl;
}

void darkwizard_print()
{
	DarkWizard dw;
	dw.Draw();
	cout << endl;
	dw.GetDescription();
	dw.ManaCost();
	dw.GetForce();
	dw.GetHealth();
}

void notalive_print()
{
	NotAlive na;
	na.GetDescription();
	cout << endl;

	cout << "# -> INSTANT <- | -> LAND <- #" << endl;
	cout << "#   (press 1)   |  (press 2) #" << endl;
}

void instant_print()
{
	Instant instant;
	instant.GetDescription();
	cout << endl;

	cout << "# -> FIREBALL <- | -> HEALING <- #" << endl;
	cout << "#    (press 1)   |   (press 2)   #" << endl;
}

void fireball_print()
{
	FireBall fb;
	fb.Draw();
	cout << endl;
	fb.GetDescription();
	fb.ManaCost();
	fb.GetDamage();
}

void healing_print()
{
	Healing healing;
	healing.Draw();
	cout << endl;
	healing.GetDescription();
	healing.ManaCost();
	healing.GetHeal();
}

void land_print()
{
	Land land;
	land.GetDescription();
	cout << endl;

	cout << "# -> RED <- | -> GREEN <- | -> BLUE <- #" << endl;
	cout << "# (press 1) |   (press 2) |  (press 3) #" << endl;

}

void red_print()
{
	Red red;
	red.Draw();
	cout << endl;
	red.GetDescription();

}

void green_print()
{
	Green green;
	green.Draw();
	cout << endl;
	green.GetDescription();
}

void blue_print()
{
	Blue blue;
	blue.Draw();
	cout << endl;
	blue.GetDescription();
}

/*---------------------------------------------------------------------------------------*/
