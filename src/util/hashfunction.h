/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef struct _hashfunction {
	void (*func)(void *, void *);
} *_HashFunctionPtr;


