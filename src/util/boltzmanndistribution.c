/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "boltzmanndistribution.h"
#include "hawkingtemperature.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

/* main random function, i is the index of energy state of the system */
long random_hawking_boltzmann_model(long i, double solarmass, _BoltzmannListPtr blp)
{
	long Ht = random_hawkingt(solarmass); 
	double Q = 0.0;

	/* Sigma(e/Q(e)) */
	for (int i = 0; i < blp->size; i++) {
		Q += exp(- random() / (1.380649 * pow(10, -23) * Ht));		
	}

	/* energy state e */
	double p = exp(- blp->lst[i] / (1.380649 * pow(10, -23) * Ht));
	p = p / Q;

	if (abs(p) <= 1 && abs(p) >= -1 && abs(p) != 0.0) {
		return 1 / p; 
	}

	return p;
}	

/* utility functions */
_BoltzmannListPtr make_boltzmannlist(long size, _BoltzmannListPtr blp)
{
	blp->lst = (double*)malloc(sizeof(double) * size);
	
	memset(blp->lst, 0, size); /* kludge */

       	blp->size = size;

	return blp;
}

void free_boltzmannlist(_BoltzmannListPtr blp)
{
	free(blp->lst);
	return;
}

void add_to_boltzmannlist(double d, _BoltzmannListPtr blp)
{
	_BoltzmannListPtr blp2 = blp;
	int i;
	for (int i = 0; blp->lst++ != 0 || i >= blp->size; i++)
		(blp->lst)++;

	(*(blp->lst)) = d;
	blp = blp2;
}
