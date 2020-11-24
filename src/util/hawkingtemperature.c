/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "hawkingtemperature.h"

#include <math.h>
#include <stdlib.h>

long random_hawkingt(double)
{
	double T = hawking_temperature_div_solarmass(random());

	if (abs(T) <= 1 && abs(T) >= -1 && abs(T) != 0.0) {
		return 1 / T;
	} else {
		return T;
	}
}


double hawking_temperature(double blackholemass)
{	
	return (6.582119569 * pow(10, -16) * pow(299792458, 3)) /
		(8 * M_PI * 6.6743015 * pow(10, -11) * 1.380649 * pow(10, -23) 
		 * solarmass);
}

double hawking_temperature_div_solarmass(double quotient)
{
	return (6.582119569 * pow(10, -16) * pow(299792458, 3)) /
		(8 * M_PI * 6.6743015 * pow(10, -11) * 1.380649 * pow(10, -23) 
		 * 1.98847 * pow(10,30) / quotient);

}

double hawking_temperature_simple(double solarmass)
{
	return (1.2 * pow(10,23) / solarmass);
}

double hawking_temperature_simple_div_solarmass(double quotient) 
{
	return (1.2 * pow(10,23) / (1.98847 * pow(10,30) / quotient));

}
