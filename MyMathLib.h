#include <math.h>
#include <stdexcept>
#ifndef MYMATHLIB_H
#define MYMATHLIB_H

double mySqrt(double x)
{
	if (x < 0)
	{
		throw std::runtime_error("Negative argument");
	}
	return sqrt(x);
}

#endif // MYMATHLIB_H