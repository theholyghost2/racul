/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _BOLTZMANNDISTRIBUTION_H_
#define _BOLTZMANNDISTRIBUTION_H_

#include "hawkingtemperature.h"

typedef struct _boltzmann_list {
	int size;
	double *lst;
} *_BoltzmannListPtr;

/* utility functions */
_BoltzmannListPtr make_boltzmannlist(long, _BoltzmannListPtr);
void free_boltzmannlist(_BoltzmannListPtr);
void add_to_boltzmannlist(double, _BoltzmannListPtr);

/* main random function */
long random_hawking_boltzmann_model(long i, double solarmass, _BoltzmannListPtr blp);

#endif
