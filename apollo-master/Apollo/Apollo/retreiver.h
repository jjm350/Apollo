#pragma once
//Data Finder and Retreiver
//Apollo

#include <fstream>
#include <iostream>
using namespace std;

int datacollect()
{
	float inpres, stanpres, pitotpres;
	ifstream myfile ("data.txt");
	myfile.open("data.txt");
	myfile >> inpres >> stanpres >> pitotpres;
	printf("%f\t%f\t%f\t",inpres, stanpres, pitotpres);
	getchar();
	cin >> inpres, stanpres, pitotpres;
	myfile.close();
	return (inpres,stanpres,pitotpres);
	//%f\t%f\t%f\n"
}