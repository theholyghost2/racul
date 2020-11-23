/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#include "variablesymbol.h"
#include "lambdasymbol.h"

/**********************************************************************
 *
 * NOTE : use _XKey handle for use in the symboltable 
 *
***********************************************************************/

/* bound symbol type definition */

typedef struct _xbind {
	void *value;
	_Variable var;
	_Lambda lambda;
} *_XBind;

/* bound symbol's handle */

typedef struct _xkey {
	_XBind xb;
	//FIXME holly key
} *_XKey;

/* Fill in value and typeid of _XBind, rx is the returned _XKey */
# define _bind (typeid, value, xb, xkey) \
	xb->typeid = typeid \
	xb->value = value \
	xkey->xb = xb \


/* accessors */

# define _bind_variable(xb) \
	return xb->var

# define _bind_lambda(xb) \
	return xb->lambda

/* Is the lambda bound ? */ 
# define _bound_lambdap(xb) \
	return xb->lambda != (void*)0 ? 1 : 0 \

/* Is the variable bound ? */ 
# define _bound_variablep(xb) \
	return xb->var != (void*)0 ? 1 : 0 \

/* Is anything bound ? */
# define _boundp (xb) \
	return (xb->lambda != (void*)0 || xb->var != (void*)0) ? 1 : 0 \	

