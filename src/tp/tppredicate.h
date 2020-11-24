/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* Theorem Prover items in predicate ant- and posterior */
#define OPERATOR_AND "and"
#define OPERATOR_OR "or"
#define OPERATOR_NOT "not"

#define OPERATOR_LEFT_PARENS "parens-left"
#define OPERATOR_RIGHT_PARENS "parens-right"

#define OPERATOR_FUNCTION_CALL "func"

/* Theorem Prover predicate */

typedef struct _tppredicate {
	void *antitems; // anterior items
	void *postitems; //posterior items	
} *TPPredicate;


