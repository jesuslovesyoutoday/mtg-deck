#include <iostream>
using namespace std;

class Card
{
	public:
		virtual void GetDescription() = 0;
};

/*-------------------------------------------------------------------------------------------------------*/

class Alive: public Card
{
	public:
		void GetHealth();
		void GetForce();
		void ManaCost();
	protected:
		int mana;
		int force;
		int health;
};

void Alive::GetHealth()
{
	cout << "# Health: " << health << " #" << endl;
}

void Alive::GetForce()
{
	cout << "# Force: " << force << " #" <<  endl;
}

void Alive::ManaCost()
{
	cout << "# ManaCost: " << mana << " #" << endl;
}

/*-------------------------------------------------------------------------------------------------------*/

class Creature: public Alive
{
	public:
		void GetDescription();
};

void Creature::GetDescription()
{
	cout << "Creatures can attack, defeat and be attacked" << endl;
}

/*--------------------------------------------------------------------------------------------------------*/

class Cat: public Creature
{
	public:
		Cat();
		void GetDescription();
};

Cat::Cat()
{
	this->mana = 5;
	this->force = 3;
	this->health = 9;
}

void Cat::GetDescription()
{
	cout << "Whitch's friend" << endl;
}

class Ghost: public Creature
{
	public:
		Ghost();
		void GetDescription();
};

Ghost::Ghost()
{
	this->mana = 2;
	this->force = 2;
	this->health = 4;
}

void Ghost::GetDescription()
{
	cout << "Dancing in the moonlight" << endl;
}

class Sceleton: public Creature
{
	public:
		Sceleton();
		void GetDescription();
};

Sceleton::Sceleton()
{
	this->mana = 4;
	this->force = 5;
	this->health = 2;
}

void Sceleton::GetDescription()
{
	cout << "Guy who will die the first" << endl;
}

/*--------------------------------------------------------------------------------------------------------*/

class Plainswalker: public Alive
{
	public:
		void GetDescription();
};

void Plainswalker::GetDescription()
{
	cout << "The leader of your army" << endl;
}

class DarkWisard: public Plainswalker
{
	public:
		DarkWisard();
		void GetDescription();
};

DarkWisard::DarkWisard()
{
	this->mana = 10;
	this->force = 15;
	this->health = 8;
}

void DarkWisard::GetDescription()
{
	cout << "# Chilling on the graveyard, prepairing to rule the world #" << endl;
}

/*---------------------------------------------------------------------------------------------------------*/

class NotAlive: public Card
{
	public:
		virtual void ManaCost() = 0;
};

/*----------------------------------------------------------------------------------------------------------*/

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
	cout << "You can cast Instants when all attackers and defenders have been chosen" << endl;
}

void Instant::ManaCost()
{
	cout << "# ManaCost: " << mana << " #" << endl;
}

/*-----------------------------------------------------------------------------------------------------------*/

class Land: public NotAlive
{
	public:
		void GetDescription();
		virtual void GetColor() = 0;
	protected:
		char color;
};

class Red: public Land
{
	public: 
		Red();
	protected:
		char color;
};

Red::Red()
{
	this->color = 'r';
}

class Green: public Land
{
	public:
		Green();
	protected:
		char color;
};

Green::Green()
{
	this->color = 'g';
}

class Blue: public Land
{
	public:
		Blue();
	protected:
		char color;
};

Blue::Blue()
{
	this->color = 'b';
}

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
	cout << "Cast lands to get mana. You can cast only one land at the beginning of your turn" << endl;
}

/*----------------------------------------------------------------------------------------------------------------*/


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

	DarkWisard wis;
	cout << "* Wisard *" << endl;
	cout << endl;
	wis.GetDescription();
	wis.ManaCost();
	wis.GetForce();
	wis.GetHealth();

	cout << endl;
	cout << endl;

	Cat cat;
	cout << "* Cat *" << endl;
	cout << endl;
	cat.GetDescription();
	cat.ManaCost();
	cat.GetForce();
	cat.GetHealth();

	return 0;
}

/*TO DO:
 * interface: press 1/2 - alive or not and so on...
 * pictures of each card
 * create instants
 * use massives of elements
 */
