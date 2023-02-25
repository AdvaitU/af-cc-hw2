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

	happiness++;

}

void Animal::quenchAnimal()
{
	thirst -= 2;
	happiness += 1;

}

void Animal::tickAnimal()
{

	hunger += ofRandom(0.0, 1.0);
	thirst += ofRandom(0.0, 1.0);

	if (happinessTick == true) {
		happiness -= ofRandom(0.0, 1.0);
	}

	happinessTick != happinessTick;   // Set happinessTick as reverse so it runs on alternate runs of tickAnimal()

	clipValues();  // CLip values between 0 and 10
}

void Animal::statusAnimal()
{

	if (hunger >= 7) {

	}
	else if (hunger == 10) {

	}
	else {

	}
	
	if (happiness <= 3) {

	}
	else if (happiness == 0) {

	}
	else {

	}
	
	if (thirst >= 7) {

	} 
	else if (thirst == 10) {

	}
	else {

	}

}

void Animal::clipValues()
{

	if (hunger > 10) {
		hunger = 10;
	}
	if (hunger < 0) {
		hunger = 0;
	}

	if (happiness > 10) {
		happiness = 10;
	}
	if (happiness < 0) {
		happiness = 0;
	}

	if (thirst > 10) {
		thirst = 10;
	}
	if (thirst < 0) {
		thirst = 0;
	}

}
