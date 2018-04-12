/********************************************/
/* Apollo Avionics Suite					*/
/* MyAlt Industries							*/
/* 4/12/2018								*/
/********************************************/
#include "datacalc.h"
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	//sensors: pitotpres, inpres
	//userdefined: stanpres, units
	double g(9.81), M(.0289644), R(8.31447), T(288.15), L(.0065), rho(1.225);
	double inpres, stanpres, pitotpres;
	int resulth, resultaspeed;
	cout << "What is the Operating Pressure in Pa" << endl;
	cin >> inpres;
	cout << "What is the Ground Pressure in Pa" << endl;
	cin >> stanpres;
	cout << "Indicated Pitot Pressure in Pa" << endl;
	cin >> pitotpres;
	resulth = altimeter(T, L, inpres, stanpres);
	cout << "Altitude is: " << resulth << " Meters" << endl;
	resultaspeed = airspeed(pitotpres, inpres);
	cout << "Airspeed is: " << resultaspeed << " Km/h" << endl;

	return 0;
};

