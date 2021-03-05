#ifndef CREATURE_IS_DEFINED
#define CREATURE_IS_DEFINED

#include "alive.h"

/*---------------------------------------------/CREATURE/-----------------------------------------*/

// Class of attacking and defeating creatures;

class Creature: public Alive
{
	public:
		void GetDescription();
		void Print_Interface();
};

/*------------------------------------------------------------------------------------------------*/

#endif //CREATURE_IS_DEFINED
