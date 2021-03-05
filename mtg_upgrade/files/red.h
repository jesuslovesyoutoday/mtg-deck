#ifndef RED_IS_DEFINED
#define RED_IS_DEFINED

#include "land.h"

/*---------------------------------------------/RED/---------------------------------------------*/

// Physical card;

// Red land;

class Red: public Land
{
	public:
		Red();
		void GetDescription();
		void Draw();
		void Print_Interface();

	protected:
		char color;
};
/*-----------------------------------------------------------------------------------------------*/

#endif //RED_IS_DEFINED
