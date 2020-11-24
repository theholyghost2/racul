/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* Theorem Prover items in predicate ant- and posterior */
#define OPERATOR_AND "and"
#define OPERATOR_OR "or"
#define OPERATOR_NOT "not"

#define OPERATOR_LEFT_PARENS "("
#define OPERATOR_RIGHT_PARENS ")"

/* symbol between anterior and posterior */
#define STRIDE "->" 

#define OPERATOR_FUNCTION_CALL "funcall"

/* Theorem Prover predicate */

/**************************************************************************
 * NOTE : the theorem prover uses prefix instead of infix or suffix
 * See validities.h as an example
 **************************************************************************/

typedef struct _tppredicate {
	void *antitems; // anterior items
	void *postitems; //posterior items	
} *TPPredicate;


