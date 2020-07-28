/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#include "variablesymbol.h"
#include "lambdasymbol.h"

/* interface definitions */

# define _Variable VariablePtr
# define _Lambda LambdaPtr

/* symbol accessors*/

void *get_lambda_symbol_value(void *lsym)
{
	LambdaPtr lp = (LambdaPtr)lsym;
	return lp->blob;
}

int get_variable_symbol_type(void *vsym);
{
	VariablePtr vp = (VariablePtr)lsym;
	return vp->typeid;
}

void *get_variable_symbol_value(void *vsym);
{
	VariablePtr vp = (VariablePtr)lsym;
	return vp->blob;
}
