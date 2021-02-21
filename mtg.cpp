#include <iostream>
using namespace std;

/*---------------------------------------------/CARD/--------------------------------------------------*/

class Card
{
	public:
		virtual void GetDescription() = 0;
};

/*----------------------------------------------/ALIVE/------------------------------------------------*/

class Alive: public Card
{
	public:
		void GetHealth();
		void GetForce();
		void ManaCost();
		void GetDescription();

	protected:
		int mana;
		int force;
		int health;
};

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
	cout << "# ManaCost: " << mana << endl;
}

void Alive::GetDescription()
{
	cout << "# Your army #" << endl;
}
/*-------------------------------------------/CREATURE/--------------------------------------------------*/

class Creature: public Alive
{
	public:
		void GetDescription();
};

void Creature::GetDescription()
{
	cout << "# Creatures can attack, defeat and be attacked #" << endl;
}

/*-----------------------------------------------/CAT/---------------------------------------------------*/

class Cat: public Creature
{
	public:
		Cat();
		void GetDescription();
		void Draw();
};

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


/*-----------------------------------------------/GHOST/---------------------------------------------------*/

class Ghost: public Creature
{
	public:
		Ghost();
		void GetDescription();
		void Draw();
};

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

/*-------------------------------------------/SKELETON/----------------------------------------------------*/

class Skeleton: public Creature
{
	public:
		Skeleton();
		void GetDescription();
		void Draw();
};

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
	cout <<        "|     S K E L E T O N	  |" << endl;
	cout <<        "|   4	-----------  5/2  |" << endl;
	cout <<        "|_________________________|" << endl;
}

/*-------------------------------------------/PLAINSWALKER/-------------------------------------------------*/

class Plainswalker: public Alive
{
	public:
		void GetDescription();
};

void Plainswalker::GetDescription()
{
	cout << "# The leader of your army #" << endl;
}

/*---------------------------------------------/DARK_WIZARD/-----------------------------------------------*/
class DarkWizard: public Plainswalker
{
	public:
		DarkWizard();
		void GetDescription();
		void Draw();
};

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

/*---------------------------------------------/NOT_ALIVE/--------------------------------------------------*/

class NotAlive: public Card
{
	public:
		void GetDescription();
};

void NotAlive::GetDescription()
{
	cout << "# Magic stuff #";
}

/*-----------------------------------------------/INSTANT/--------------------------------------------------*/

class Instant: public NotAlive
{
	public:
		void GetDescription();
		void ManaCost();
	protected:
		int mana;
};

void Instant::GetDescription()
{
	cout << "# You can cast Instants when all attackers and defenders have been chosen #" << endl;
}

void Instant::ManaCost()
{
	cout << "# ManaCost: " << this->mana << endl;
}

/*------------------------------------------------/FIREBALL/--------------------------------------------------*/

class FireBall: public Instant
{
	public:
		FireBall();
		void GetDescription();
		void GetDamage();
		void Draw();
	protected:
		int damage;
};

FireBall::FireBall()
{
	this->mana = 3;
	this->damage = 3;
}

void FireBall::GetDescription()
{
	cout << "# Deals damage to target creature #" << endl;
}

void FireBall::GetDamage()
{
	cout << "# Damage: " << this->damage << endl;
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

/*-----------------------------------------------/HEALING/----------------------------------------------------*/

class Healing: public Instant
{
	public:
		Healing();
		void GetDescription();
		void Draw();
		void GetHeal();
	protected:
		int heal;
};

Healing::Healing()
{
	this->heal = 3;
	this->mana = 3;
}

void Healing::GetDescription()
{
	cout << "# Add hp to a target creature#" << endl;
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

/*-----------------------------------------------/LAND/------------------------------------------------------*/

class Land: public NotAlive
{
	public:
		void GetDescription();
		void GetColor();
	protected:
		char color;
};

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

/*-------------------------------------------------/RED/------------------------------------------------------*/

class Red: public Land
{
	public: 
		Red();
		void GetDescription();
		void Draw();

	protected:
		char color;
};

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

/*-------------------------------------------------/GREEN/----------------------------------------------------*/

class Green: public Land
{
	public:
		Green();
		void GetDescription();
		void Draw();
	protected:
		char color;
};

Green::Green()
{
	this->color = 'g';
}

void Green::GetDescription()
{
	cout << "# Forest Graveyard #" << endl;
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

/*--------------------------------------------------/BLUE/----------------------------------------------------*/
class Blue: public Land
{
	public:
		Blue();
		void GetDescription();
		void Draw();
	protected:
		char color;
};

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
