#ifndef PLAINSWALKER_IS_DEFINED
#define PLAINSWALKER_IS_DEFINED

#include "alive.h"

/*-----------------------------------------/PLAINSWALKER/-----------------------------------------*/

// Main hero in the deck;

class Plainswalker: public Alive
{
	public:
		void GetDescription();
		void Print_Interface();
};

/*------------------------------------------------------------------------------------------------*/

#endif //PLAINSWALKER_IS_DEFINED
