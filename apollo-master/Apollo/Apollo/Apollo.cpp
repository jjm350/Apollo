/********************************************/
/* Apollo Avionics Suite					*/
/* MyAlt Industries							*/
/* 4/12/2018								*/
/********************************************/
#include "datacalc.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	//input presures are in inHg
	//sensors: pitotpres, inpres
	//userdefined: stanpres, units	
	double inpres, stanpres, pitotpres;
	int resulth, resultaspeed, resultd, x;
	x = 1;
	while (x == 1) {
		//data importation
		ifstream myfile("data.txt", ios::in);
		float inpres, stanpres, pitotpres;
		myfile >> inpres >> stanpres >> pitotpres;

		//calculation subroutines, units are in standard kts and ft
		resulth = altimeter(inpres, stanpres);
		resultaspeed = airspeed(pitotpres, inpres);

		//writing to parameters
		ofstream bfile;
		bfile.open("parameters.txt");
		bfile << "Altitude: " << resulth <<" " << "Airspeed: " << resultaspeed;
		bfile.close();
	};
	return 0;
};

