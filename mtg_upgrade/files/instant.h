#ifndef INSTANT_IS_DEFINED
#define INSTANT_IS_DEFINED

#include "notalive.h"

/*-------------------------------------------/INSTANT/-------------------------------------------*/

// Class that contains all instants that can
// be used when all attacking and defending
// creatures have been already chosen;

// Instants costs some mana so there is
// ManaCost method;

class Instant: public NotAlive
{
	public:
		void GetDescription();
		void ManaCost();
		void Print_Interface();
	
	protected:
		int mana;
};

/*-----------------------------------------------------------------------------------------------*/

#endif // INSTANT_IS_DEFINED
