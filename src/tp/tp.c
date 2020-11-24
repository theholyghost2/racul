/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "tp.h"

#include <stdlib.h>

const char* compare_operator(const char *oper)
{
	switch(atoi(oper)) {
		case 	atoi(OPERATOR_AND):{
			return OPERATOR_AND;
			//break;
		}
		case 	atoi(OPERATOR_OR):{
			return OPERATOR_OR;
			//break;
		}
		case 	atoi(OPERATOR_NOT):{
			return OPERATOR_NOT;
			//break;
		}
		case 	atoi(OPERATOR_LEFT_PARENS):{
			return OPERATOR_LEFT_PARENS;
			//break;
		}
		case 	atoi(OPERATOR_RIGHT_PARENS):{
			return OPERATOR_RIGHT_PARENS;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_CALL):{
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
		case 	atoi(OPERATOR_FUNCTION_CALL):{
			/* hybrid for composite and common functions */
			return OPERATOR_FUNCTION_CALL;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_PLUS):{
			return OPERATOR_FUNCTION_PLUS;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_MINUS):{
			return OPERATOR_FUNCTION_MINUS;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_PRODUCT):{
			return OPERATOR_FUNCTION_PRODUCT;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_DIVISION):{
			return OPERATOR_FUNCTION_DIVISION;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_++):{
			return OPERATOR_FUNCTION_++;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_--):{
			return OPERATOR_FUNCTION_--;
			//break;
		}
		default:
			return NULL;
	   		//break;
}	

const char* compare_composite_function(const char *foper)
{
	switch(atoi(foper)) {
		case 	atoi(OPERATOR_FUNCTION_COMPOSITE_CALL):{
			/* hybrid for composite and common functions */
			return OPERATOR_FUNCTION_CALL;
			//break;
		}
		case 	atoi(OPERATOR_FUNCTION_ITERATOR):{
			return OPERATOR_FUNCTION_ITERATOR;
			//break;
		}
		default:
			return NULL;
	   		//break;
}	

const char *compare_function_operand(const char *foperand)
{
		switch (atoi(foperand)) {

		}	
}

void call_function(const char *foper, const char *foperand)
{
	if (compare_function(foper) != NULL) {

	} else if (compare_function(foper) != NULL) {

	} else {
		return;
	}	
}
