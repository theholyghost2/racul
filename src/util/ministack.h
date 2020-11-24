/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* A character string storage/stack */

/* non-realloced ! */
#define MINI_STACK_SIZE 8192

typedef struct _stackitem {
	const char *s;
} *_StackItemPtr;

typedef struct _stack {
	int index;	
	_StackItemPtr *stk;
} *_StackPtr;

_StackPtr make_stack(_StackPtr);
void free_stack(_StackPtr);

void push_on_stack(const char *, _StackPtr);
const char *pop_from_stack(_StackPtr);
