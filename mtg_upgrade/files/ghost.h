#ifndef GHOST_IS_DEFINED
#define GHOST_IS_DEFINED

#include "creature.h"

/*---------------------------------------------/GHOST/--------------------------------------------*/

// Physical card;

class Ghost: public Creature
{
	public:
		Ghost();
		void GetDescription();
		void Draw();
		void Print_Interface();
};

/*------------------------------------------------------------------------------------------------*/

#endif //GHOST_IS_DEFINED

