// Author: Will Vesevick
// CS341
// pirate.h

#ifndef PIRATE_H
#define PIRATE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pirate {
	private:
		string pirateName;
		string pirateShanty;
		int piratePower;
		int pirateToughness;
		int stabs;
		static int allStabs; //possibly add access functions to variables
		
		
	public:
		// core functionality
		void initialize(string Name, string Shanty, int Power, int Toughness);
		
		// default constructor
		Pirate();
		
		// default destructor
		~Pirate();
		
		//access functions
		string getName();
		string getShanty();
		int getPower();
		int getToughness();
		int getStabs();
		int getAllStabs();
		void stab();
};

int Pirate::allStabs = 0;

Pirate::Pirate(){
	srand(time(0));
	pirateName = "";
	pirateShanty = "";
	piratePower = 0;
	pirateToughness = 0;
	stabs = 0;
} // end constructor

Pirate::~Pirate(){

} // end destructor

string Pirate::getName(){
	return pirateName;
} // end getName

string Pirate::getShanty(){
	return pirateShanty;
} // end getBattleCry

int Pirate::getPower(){
	return piratePower;
} // end getPower

int Pirate::getToughness(){
	return pirateToughness;
}

void Pirate::initialize(string Name, string Shanty, int Power, int Toughness){
	pirateName = Name;
	pirateShanty = Shanty;
	piratePower = Power;
	pirateToughness = Toughness;
}

// int Pirate::attack(){
// 	return
// }

int Pirate::getStabs(){
	return stabs;
}
int Pirate::getAllStabs(){
	return allStabs;
}
void Pirate::stab(){
	stabs++;
	allStabs++;
}


#endif
