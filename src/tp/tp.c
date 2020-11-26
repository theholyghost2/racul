/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "tp.h"

#include <stdlib.h>

const char* compare_operator(const char *oper)
{
	switch(atoi(oper)) {
		case OPERATOR_AND_N:{
			return OPERATOR_AND;
			//break;
		}
		case 	OPERATOR_OR_N:{
			return OPERATOR_OR;
			//break;
		}
		case 	OPERATOR_NOT_N:{
			return OPERATOR_NOT;
			//break;
		}
		case 	OPERATOR_LEFT_PARENS_N:{
			return OPERATOR_LEFT_PARENS;
			//break;
		}
		case 	OPERATOR_RIGHT_PARENS_N:{
			return OPERATOR_RIGHT_PARENS;
			//break;
		}
		case 	OPERATOR_FUNCTION_CALL_N:{
			return OPERATOR_FUNCTION_CALL;
			//break;
		}
		default:{
			return NULL;
	   		//break;
		}
	}
	//never reached 
	return NULL;
}		

const char* compare_function(const char *foper)
{
	switch(atoi(foper)) {
		case 	OPERATOR_FUNCTION_CALL_N:{
			/* hybrid for composite and common functions */
			return OPERATOR_FUNCTION_CALL;
			//break;
		}
		case 	OPERATOR_FUNCTION_PLUS_N:{
			return OPERATOR_FUNCTION_PLUS;
			//break;
		}
		case 	OPERATOR_FUNCTION_MINUS_N:{
			return OPERATOR_FUNCTION_MINUS;
			//break;
		}
		case 	OPERATOR_FUNCTION_PRODUCT_N:{
			return OPERATOR_FUNCTION_PRODUCT;
			//break;
		}
		case 	OPERATOR_FUNCTION_DIVISION_N:{
			return OPERATOR_FUNCTION_DIVISION;
			//break;
		}
		case 	OPERATOR_FUNCTION_PLUSPLUS_N:{
			return OPERATOR_FUNCTION_PLUSPLUS;
			//break;
		}
		case 	OPERATOR_FUNCTION_MINUSMINUS_N:{
			return OPERATOR_FUNCTION_MINUSMINUS;
			//break;
		}
		default:
			return NULL;
	   		//break;
	}
	//never reached 
	return NULL;
}	

const char* compare_composite_function(const char *foper)
{
	switch(atoi(foper)) {
		case 	OPERATOR_FUNCTION_COMPOSITE_CALL_N:{
			/* hybrid for composite and common functions */
			return OPERATOR_FUNCTION_CALL;
			//break;
		}
		case 	OPERATOR_FUNCTION_ITERATOR_N:{
			return OPERATOR_FUNCTION_ITERATOR;
			//break;
		}
		default:
			return NULL;
	   		//break;
	}
	//never reached 
	return NULL;
}	

const char *compare_function_operand(const char *foperand)
{
		switch (atoi(foperand)) {

		}	

	return NULL;
}

void call_function(const char *foper, const char *foperand)
{
	if (compare_function(foper) != NULL) {

	} else if (compare_function(foper) != NULL) {

	} else {
		return;
	}	
}
