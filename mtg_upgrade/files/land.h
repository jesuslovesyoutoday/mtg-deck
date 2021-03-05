#ifndef LAND_IS_DEFINED 
#define LAND_IS_DEFINED

#include "notalive.h"

/*---------------------------------------------/LAND/-------------------------------------------*/

// Class of cards that can be casted to get mana;

// You can cast only one land at the beginning of your turn;

// There are lands of different colors so that
// they have GetColor method;

class Land: public NotAlive
{
	public:
		void GetDescription();
		void GetColor();
		void Print_Interface();

	protected:
		char color;
};

/*-----------------------------------------------------------------------------------------------*/

#endif //LAND_IS_DEFINED
