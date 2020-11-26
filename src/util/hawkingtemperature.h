/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _HAWKINGTEMPERATURE_H_
#define _HAWKINGTEMPERATURE_H_

/* common function for randoms using only the hawking temperature */
long random_hawkingt();

double hawking_temperature(double); 
double hawking_temperature_div_solarmass(double); // relative solar mass 
double hawking_temperature_simple(double); 
double hawking_temperature_simple_div_solarmass(double); //relative solar mass

#endif
