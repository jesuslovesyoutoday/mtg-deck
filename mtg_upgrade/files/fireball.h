#ifndef FIREBALL_IS_DEFINED
#define FIREBALL_IS_DEFINED

#include "instant.h"

/*------------------------------------------/FIREBALL/------------------------------------------*/

// Physical card;

// Deals damage to target creature
// so that it has GetDamage method;

class FireBall: public Instant
{
	public:
		FireBall();
		void GetDescription();
		void GetDamage();
		void Draw();
		void Print_Interface();
	
	protected:
		int damage;
};

/*----------------------------------------------------------------------------------------------*/

#endif // FIREBALL_IS_DEFINE
