/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* Hex system for ELF */
typedef int Hex;

typedef struct _sym {
	Hex h;
	//FIXME
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

/* X accessors */

# define xsym(xsymbol) \
       return xsymbol->symbol;

# define xptr(xsymbol) \
       return xsymbol->x;



