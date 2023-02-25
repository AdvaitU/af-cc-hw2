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
	int petState;

	Animal();
	~Animal();

	void set(float i1 = 5.0, float i2 = 5.0, float i3 = 5.0);  // For setting initial values
	
	void feedAnimal();
	void petAnimal();
	void quenchAnimal();
	void tickAnimal();
	void statusAnimal();

	void clipValues();


};
