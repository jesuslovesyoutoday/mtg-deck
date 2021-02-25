#ifndef CARD_IS_DEFINED
#define CARD_IS_DEFINED

/*---------------------------------------------/CARD/--------------------------------------------*/

// Abstract class defining all cards in your deck;

// It's method is overloaded in every next class;

class Card
{
	public:
		virtual void GetDescription() = 0;
};

/*---------------------------------------------/ALIVE/-------------------------------------------*/

// Class that contains all warriors on the field,
// parameters and methods common for them;

class Alive: public Card
{
	public:
		void GetHealth();
		void GetForce();
		void ManaCost();
		void GetDescription();
	
	protected:
		int mana;
		int force;
		int health;
};

/*---------------------------------------------/CREATURE/-----------------------------------------*/

// Class of attacking and defeating creatures;

class Creature: public Alive
{
	public:
		void GetDescription();
};

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
};

/*---------------------------------------------/GHOST/--------------------------------------------*/

// Physical card;

class Ghost: public Creature
{
	public:
		Ghost();
		void GetDescription();
		void Draw();
};

/*--------------------------------------------/SKELETON/------------------------------------------*/

// Physical card;

class Skeleton: public Creature
{
	public:
		Skeleton();
		void GetDescription();
		void Draw();
};

/*-----------------------------------------/PLAINSWALKER/-----------------------------------------*/

// Main hero in the deck;

class Plainswalker: public Alive
{
	public:
		void GetDescription();
};

/*------------------------------------------/DARK_WIZARD/-----------------------------------------*/

// Physical plainswalker;

class DarkWizard: public Plainswalker
{
	public:
		DarkWizard();
		void GetDescription();
		void Draw();
};

/*------------------------------------------/NOT_ALIVE/-------------------------------------------*/

// Class that contains all magic stuff;

class NotAlive: public Card
{
	public:
		void GetDescription();
};

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
	
	protected:
		int mana;
};

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
	
	protected:
		int damage;
};

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

	protected:
		int heal;
};

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

	protected:
		char color;
};

/*---------------------------------------------/RED/---------------------------------------------*/

// Physical card;

// Red land;

class Red: public Land
{
	public:
		Red();
		void GetDescription();
		void Draw();

	protected:
		char color;
};

/*-------------------------------------------/GREEN/--------------------------------------------*/

// Physical card;

// Green land;

class Green: public Land
{
	public:
		Green();
		void GetDescription();
		void Draw();

	protected:
		char color;
};

/*--------------------------------------------/BLUE/--------------------------------------------*/

// Physical card;

// Blue land;

class Blue: public Land
{
	public:
		Blue();
		void GetDescription();
		void Draw();

	protected:
		char color;
};

/*----------------------------------------------------------------------------------------------*/

#endif // CARD_IS_DEFINED
