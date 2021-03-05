#ifndef SKELETON_IS_DEFINED
#define SKELETON_IS_DEFINED

#include "creature.h"

/*--------------------------------------------/SKELETON/------------------------------------------*/

// Physical card;

class Skeleton: public Creature
{
	public:
		Skeleton();
		void GetDescription();
		void Draw();
		void Print_Interface();
};

/*------------------------------------------------------------------------------------------------*/

#endif //SKELETON_IS_DEFINED
