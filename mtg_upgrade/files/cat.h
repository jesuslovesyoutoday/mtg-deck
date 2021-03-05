#ifndef CAT_IS_DEFINED
#define CAT_IS_DEFINED

#include "creature.h"

/*-----------------------------------------------/CAT/--------------------------------------------*/

// Class that has physical realization as a card;

// These have exact parameteres that's why
// constructor and draw method are needed;

class Cat: public Creature
{
	public:
		Cat();
		void GetDescription();
		void Draw();
		void Print_Interface();
};

/*------------------------------------------------------------------------------------------------*/

#endif //CAT_IS_DEFINED
