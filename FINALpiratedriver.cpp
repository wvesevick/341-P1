#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "pirate.h"

void readPirates(Pirate pirateArray[]);
void fight(Pirate &pirate1, Pirate &pirate2);

int main(){
	Pirate allPirates[10];
	Pirate onePirate;
	
	readPirates(allPirates);
	
	for(int i = 0; i < 10; i++){
		for(int k = 0; k < 10; k++){
			if(allPirates[i].getName() != allPirates[k].getName()){
			int x = 0 + rand() % (allPirates[i].getPower() - 0 + 1);
			fight(allPirates[i], allPirates[k]);
			}
		}
	}
	for(int i = 0; i < 10; i++){
		cout << allPirates[i].getName() << " was stabbed " << allPirates[i].getStabs() << " times."<< endl;
	}
	
	
	return 0;
}

void readPirates(Pirate pirateArray[]){
	ifstream infile;
	infile.open("Pirates.txt");
	if (!infile) {
	cout << "pirates.txt not opened" << endl;
	} // end if
	string tempName, tempShanty;
	int tempPower, tempToughness;

	for(int x = 0; x < 10; x++){
		infile >> tempName;
		infile >> tempPower;
		infile >> tempToughness;
		getline(infile, tempShanty);
		pirateArray[x].initialize(tempName, tempShanty, tempPower, tempToughness);
	//	cout << pirateArray[x].getName() << endl;
	}
	infile.close();
}
int totalStabs = 0;
void fight(Pirate &pirate1, Pirate &pirate2){
	int x = 0 + rand() % (pirate1.getPower() - 0 + 1);
	if(x > pirate2.getToughness()){
		pirate2.stab();
		totalStabs++;
		cout << "Total Stab counter: " << totalStabs << endl;
	}

}
