/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* Theorem Prover items in predicate ant- and posterior */
#define OPERATOR_AND "and"
#define OPERATOR_OR "or"
#define OPERATOR_NOT "not"

#define OPERATOR_LEFT_PARENS "("
#define OPERATOR_RIGHT_PARENS ")"

/* It follows that */
#define STRIDE "->"

/* symbol between anterior and posterior */
#define COMPARE "<->" 

/****
 * NOTE : use of math and OOP functions in the theorem prover 
 ****/

#define OPERATOR_FUNCTION_CALL "funcall"
#define OPERATOR_FUNCTION_COMPOSITE_CALL "funcallcomposite"

/* math validity functions, see functions.h */
#define OPERATOR_FUNCTION_PLUS "+"
#define OPERATOR_FUNCTION_MINUS "-"
#define OPERATOR_FUNCTION_PRODUCT "*"
#define OPERATOR_FUNCTION_DIVISION "/"
#define OPERATOR_FUNCTION_++ "++"
#define OPERATOR_FUNCTION_-- "--"

#define OPERATOR_FUNCTION_VARIABLE "var"
#define OPERATOR_FUNCTION_CONST "const"

/* composite functions */

#define OPERATOR_FUNCTION_ITERATOR "iterator"
/* Theorem Prover predicate */

/**************************************************************************
 * NOTE : the theorem prover uses prefix instead of infix or suffix
 * See validities.h as an example
 **************************************************************************/

typedef struct _tppredicate {
	void *antitems; // anterior items
	void *postitems; //posterior items	
} *TPPredicatePtr;


