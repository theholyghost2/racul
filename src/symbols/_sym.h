/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef int Hex;

typedef struct _sym {
	Hex h;
	//FIXME
} _Sym;

# define cast_sym_to(hex, sym) \
	hex = (Hex)sym->hex; \
	return hex;
