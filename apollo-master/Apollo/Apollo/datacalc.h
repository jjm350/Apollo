#pragma once
#include <sdkddkver.h>
#include <stdio.h>
#include <tchar.h>
#include <cmath>
#include <iostream>

int altimeter(double inpres, double stanpres)
{

	double h;
	h = 1000 * (stanpres - inpres);
	return h;
};

int airspeed(double pitotpres, double inpres)
{
	//Airspeed in Kts
	double rho(1.225), aspeed;
	pitotpres = pitotpres * 3356.39;
	inpres = inpres * 3356.39;
	aspeed = sqrt((2 * (pitotpres - inpres)) / rho);
	aspeed = aspeed * 1.94384;
	return aspeed;
};

