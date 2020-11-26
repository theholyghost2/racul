/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _TP_H_
#define _TP_H_

/* Theorem Prover code */

#include "tppredicate.h"

const char *compare_operator(const char *);
const char *compare_function(const char *);
const char *compare_composite_function(const char *);
const char *compare_function_operand(const char *);
void call_function(const char *, const char *);

#endif
