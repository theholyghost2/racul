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
		default:
			return NULL;
	   		//break;
}		
