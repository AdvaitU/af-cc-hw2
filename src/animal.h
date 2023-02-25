#pragma once

#include "ofMain.h"
using namespace std;


class Animal {
public:

	float hunger;        // Hunger level of the animal
	float thirst;        // Thirst level of the animal
	float happiness;     // Happiness level of the animal
	bool happinessTick = true;   // Bool to judge either happiness decreasing every tick or not
	string name;

	Animal();
	~Animal();

	void set(float i1 = 5, float i2 = 5, float i3 = 5);  // For setting initial values
	
	void feedAnimal();
	void petAnimal();
	void quenchAnimal();
	void tickAnimal();
	void statusAnimal();

	void clipValues();


};
