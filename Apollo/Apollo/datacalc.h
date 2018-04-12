#pragma once
#include <sdkddkver.h>
#include <stdio.h>
#include <tchar.h>
#include <cmath>
#include <iostream>

int altimeter(double T, double L, double inpres, double stanpres)
{
	double h, x, xn, y, z;
	x = 5.2554;
	xn = 1 / x;
	y = inpres / stanpres;
	z = pow(y, xn);
	h = (T*(1 - (z)) / L);
	return h;
};

int airspeed(double pitotpres, double inpres)
{
	double g(9.81), M(.0289644), R(8.31447), T(288.15), L(.0065), rho(1.225), aspeed;
	aspeed = sqrt((2 * (pitotpres - inpres)) / rho);
	aspeed = aspeed * 3.6;
	return aspeed;
};

