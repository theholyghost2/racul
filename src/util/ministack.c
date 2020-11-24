/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "ministack.h"

#include <string.h>

_StackPtr make_stack(_StackPtr sp)
{	
	sp->stk = (_StackItemPtr*)malloc(sizeof(_StackItemPtr) * MINI_STACK_SIZE);
	return sp;
}

void free_stack(_StackPtr sp)
{
	free(sp->stk);
}

void push_on_stack(const char *str, _StackPtr sp)
{
	sp->stk[++(sp->index)] = strdup(str);
}

_StackItemPtr pop_from_stack(const char *str, _StackPtr sp)
{
	/* does not test for empty stack */
	return (sp->stk[sp->index--] && sp->stk[index+1] = (const char *)0);
}

