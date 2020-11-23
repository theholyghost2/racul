/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#include "variablesymbol.h"
#include "lambdasymbol.h"

typedef struct _xbind {
	void *value;
	_Variable var;
	_Lambda lambda;
} *_Xbind;

/* accessors */

# define _bind_variable(xb) \
	return xb->var

# define _bind_lambda(xb) \
	return xb->lambda

/* Is the lambda bound ? */ /* FIXME cast 0 instead of NULL */
# define _bound_lambdap(xb) \
	return xb->lambda != NULL ? 1 : 0 \

/* Is the variable bound ? */ /* FIXME cast 0 instead of NULL */
# define _bound_variablep(xb) \
	return xb->var != NULL ? 1 : 0 \

/* Is anything bound ? */ /* FIXME cast 0 instead of NULL */
# define _boundp (xb) \
	return (xb->lambda != NULL || xb->var != NULL) ? 1 : 0 \	

/* rx is the returned _Xbind */
# define _bind (typeid, value, xkey, rx) \
	xkey->typeid = typeid \
	xkey->blob = value \
	rx->xkey = xkey \

