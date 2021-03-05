#ifndef ALIVE_IS_DEFINED
#define ALIVE_IS_DEFINED

#include "card.h"

/*---------------------------------------------/ALIVE/-------------------------------------------*/

// Class that contains all warriors on the field,
// parameters and methods common for them;

class Alive: public Card
{
	public:
		void GetHealth();
		void GetForce();
		void ManaCost();
		void GetDescription();
		void Print_Interface();
	
	protected:
		int mana;
		int force;
		int health;
};

/*------------------------------------------------------------------------------------------------*/

#endif //ALIVE_IS_DEFINED
