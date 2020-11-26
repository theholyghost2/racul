/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* NOTE (Mon 07/27/2020) :
 * This file contains raw symbols in the sense that these contain a hexadecimal
 * in _Sym which is a number for storing the symbol. Then,
 * the _XPtr structure has the raw lambda or variable in itself, these count
 * as unprocessed symbols, which have no binding to a value nor have they been
 * classified as the true symboltable entities, _Variable and Lambda_ (see
 * the files variablesymbol.h and lambdasymbol.h.) Each of these includes
 * the _XSymbol from these primitive variables.
 *
 * One can say that _XSymbol can be used as temporary object for would-be 
 * stored functions and variables. For a simple symboltable _Variable and
 * _Lambda should be enough. This does not provide for futures or heavily
 * threaded systems, as an OOP example.
 */

#ifndef __SYM_H_
#define __SYM_H_

/* Hex system for ELF */
typedef int Hex;

typedef struct _sym {
	Hex h;
	/* FIXME */
} *_Sym;

# define cast_sym_to(hex, sym) \
	hex = (Hex)sym->hex; \
	return hex;

/* X structures */

typedef struct _x {
	void *xvariable;
	void *xlambda;
} *_XPtr;

typedef struct _xsymbol {
	_Sym symbol;
	_XPtr x;
} *_XSymbol;

/* _XSymbol accessors */

# define xsym(symbol) \
       return symbol->symbol;

# define xptr(symbol) \
       return symbol->x;

/* Most used functions : hexadecimal code, variable and lambda accessors */

#define hex(symbol) \
	return xsym(symbol)->h

#define variable(symbol) \
	return xptr(symbol)->xvariable

#define lambda(symbol) \
	return xptr(symbol)->xlambda

/* Does the _XSymbol have X defined ? */

#define hexp(symbol) \
	return hex(symbol) != (void*)0 ? 1 : 0

#define variablep(symbol) \
	return variable(symbol) != (void*)0 ? 1 : 0

#define lambdap(symbol) \
	return lambda(symbol) != (void*)0 ? 1 : 0

#endif
