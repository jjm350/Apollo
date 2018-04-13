/********************************************/
/* Apollo Avionics Suite					*/
/* MyAlt Industries							*/
/* 4/12/2018								*/
/********************************************/
#include "datacalc.h"
#include <cmath>
#include <iostream>
#include "retreiver.h"
using namespace std;

int main() {
	//input pressures are in Pa
	//sensors: pitotpres, inpres
	//userdefined: stanpres, units
	double g(9.81), M(.0289644), R(8.31447), T(288.15), L(.0065), rho(1.225);
	double inpres, stanpres, pitotpres;
	int resulth, resultaspeed, resultd, x;
	x = 1;
	while (x == 1) {
		resultd = datacollect();
		cin >> inpres;
		cin >> stanpres;
		cin >> pitotpres;
		resulth = altimeter(T, L, inpres, stanpres);
		cout << "Altitude is: " << resulth << " Meters" << endl;
		resultaspeed = airspeed(pitotpres, inpres);
		cout << "Airspeed is: " << resultaspeed << " Km/h" << endl;
		};
	return 0;
};

