/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#ifndef _VARIABLESYMBOL_H_
#define _VARIABLESYMBOL_H_

#include "_sym.h"

typedef struct _var {
	void *blob;
	int typeid; // FIXME holly
	_XSymbol x;
} *_Variable;


#endif
