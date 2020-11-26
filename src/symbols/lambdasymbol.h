/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _LAMBDA_SYMBOL_H_
#define _LAMBDA_SYMBOL_H_

#include "_sym.h"

typedef struct _lambda {
	void *blob;
	_XSymbol x;
} *_Lambda;

#endif
