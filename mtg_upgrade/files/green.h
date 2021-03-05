#ifndef GREEN_IS_DEFINED
#define GREEN_IS_DEFINED

#include "land.h"

/*-------------------------------------------/GREEN/--------------------------------------------*/

// Physical card;

// Green land;

class Green: public Land
{
	public:
		Green();
		void GetDescription();
		void Draw();
		void Print_Interface();

	protected:
		char color;
};

/*-----------------------------------------------------------------------------------------------*/

#endif //GREEN_IS_DEFINED
