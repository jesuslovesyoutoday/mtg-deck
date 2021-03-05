#ifndef HEALING_IS_DEFINED
#define HEALING_IS_DEFINED

#include "instant.h"

/*------------------------------------------/HEALING/-------------------------------------------*/

// Physical card;

// Recover a few hp of a target creature
// so that it has GetHeal method;

class Healing: public Instant
{
	public:
		Healing();
		void GetDescription();
		void Draw();
		void GetHeal();
		void Print_Interface();

	protected:
		int heal;
};

/*----------------------------------------------------------------------------------------------*/

#endif //HEALING_IS_DEFINED
