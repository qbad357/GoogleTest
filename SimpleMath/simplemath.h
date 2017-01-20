#pragma once
#include <cmath>
#include <string>
double Cube(double d)
{
	if (d == 0)
	{
		throw std::string("BLAD");
	}
	else if (d < 0)
	{
		throw 255;
	}


	return pow(d, 3);
};