/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#include "variablesymbol.h"
#include "lambdasymbol.h"

typedef struct _xbind {
	void *value;
	_Variable var;
	_Lambda lambda;
} *_Xbind;

# define _bind (typeid, value, xkey, rx) \
	xkey->typeid = typeid; \
	xkey->blob = value; \
	rx->xkey; \ ### rx is the returned _Xbind


