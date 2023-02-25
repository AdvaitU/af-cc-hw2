#include "animal.h"
using namespace std;


Animal::Animal()
{

}

Animal::~Animal()
{
	
}

void Animal::set(float i1, float i2, float i3)
{

	hunger = i1;
	thirst = i2;
	happiness = i3;

}

void Animal::feedAnimal()
{

	hunger -= 2;
	happiness++;

}

void Animal::petAnimal()
{

	happiness += 1.0;

}

void Animal::quenchAnimal()
{
	thirst -= 2.0;
	happiness += 1.0;

}

void Animal::tickAnimal()
{

	hunger += ofRandom(0.4, 0.1);
	thirst += ofRandom(0.4, 0.1);

	if (happinessTick == true) {
		happiness -= ofRandom(0.0, 1.0);
	}

	happinessTick != happinessTick;   // Set happinessTick as reverse so it runs on alternate runs of tickAnimal()

	clipValues();  // Clip values between 0 and 10
}

void Animal::statusAnimal()
{

	if ((hunger >= 7.0) && (thirst >= 7.0) && (happiness >= 6.0)) {
		petState = 4;     // exhaustedCat
	} 
	else if ((hunger >= 7.0) && (thirst >= 7.0) && (happiness <= 6.0)) {
		petState = 5     // sadCat
	}
	else if ((hunger >= 7.0) && (thirst < 7.0) && (happiness <= 6.0)) {
		petState = 3;    // hungryCat
	}

}

void Animal::clipValues()
{

	if (hunger >= 10.0) {
		hunger = 10.0;
	}
	if (hunger < 0.0) {
		hunger = 0.0;
	}

	if (happiness >= 10.0) {
		happiness = 10.0;
	}
	if (happiness <= 0.0) {
		happiness = 0.0;
	}

	if (thirst >= 10.0) {
		thirst = 10.0;
	}
	if (thirst <= 0.0) {
		thirst = 0.0;
	}

}
