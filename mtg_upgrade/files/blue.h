#ifndef BLUE_IS_DEFINED
#define BLUE_IS_DEFINED

#include "land.h"

/*--------------------------------------------/BLUE/--------------------------------------------*/

// Physical card;

// Blue land;

class Blue: public Land
{
	public:
		Blue();
		void GetDescription();
		void Draw();
		void Print_Interface();

	protected:
		char color;
};

/*----------------------------------------------------------------------------------------------*/

#endif //BLUE_IS_DEFINED
