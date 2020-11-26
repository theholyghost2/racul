/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _TPPREDICATE_H_
#define _TPPREDICATE_H_

#include <stdlib.h>

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
/* increment decrement */
#define OPERATOR_FUNCTION_PLUSPLUS "++"
#define OPERATOR_FUNCTION_MINUSMINUS "--"

#define OPERATOR_FUNCTION_VARIABLE "var"
#define OPERATOR_FUNCTION_CONST "const"

/* composite functions */

#define OPERATOR_FUNCTION_ITERATOR "iterator"




/* hex numbers NOTE FIXME : needs magical numbers */
#define OPERATOR_AND_N 10
#define OPERATOR_OR_N  20
#define OPERATOR_NOT_N 30

#define OPERATOR_LEFT_PARENS_N 40
#define OPERATOR_RIGHT_PARENS_N 50

/* It follows that */
#define STRIDE_N 60

/* symbol between anterior and posterior */
#define COMPARE_N 70

/****
 * NOTE : use of math and OOP functions in the theorem prover 
 ****/

#define OPERATOR_FUNCTION_CALL_N 80
#define OPERATOR_FUNCTION_COMPOSITE_CALL_N 90

/* math validity functions, see functions.h */
#define OPERATOR_FUNCTION_PLUS_N 100
#define OPERATOR_FUNCTION_MINUS_N 110
#define OPERATOR_FUNCTION_PRODUCT_N 120
#define OPERATOR_FUNCTION_DIVISION_N 130
/* increment decrement */
#define OPERATOR_FUNCTION_PLUSPLUS_N 140
#define OPERATOR_FUNCTION_MINUSMINUS_N 150

#define OPERATOR_FUNCTION_VARIABLE_N 160
#define OPERATOR_FUNCTION_CONST_N 170

/* composite functions */

#define OPERATOR_FUNCTION_ITERATOR_N 180



/* Theorem Prover predicate */

/**************************************************************************
 * NOTE : the theorem prover uses prefix instead of infix or suffix
 * See validities.h as an example
 **************************************************************************/

typedef struct _tppredicate {
	void *antitems; // anterior items
	void *postitems; //posterior items	
} *TPPredicatePtr;

#endif
