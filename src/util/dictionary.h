/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#ifndef _DICTIONARY_H_
#define _DICTIONARY_H_

typedef struct _key {
	void *x;
	long i; // for e.g. functional hashing
} DKey;

typedef struct _key *DKeyPtr;

typedef struct _value {
	void *y; // value of symbol
	long i; // symbol table hex (memory ref) 
} DValue;

typedef struct _value *DValuePtr;

typedef struct _pair {
	DKeyPtr key;
	DValuePtr value;
} DPair;

typedef struct _pair *DPairPtr;

typedef DPairPtr *DictionaryCorePtr;

/* constructors, destructors */

DictionaryCorePtr make_dictionary(long, DictionaryCorePtr);
void free_dictionary(DictionaryCorePtr);

/* get, set and access, hexadecimal keys are long ints, common functions use 
 * void* pointer
 */

/* The dictionary has no NULL keys (FIXME if needed, use hexkey functions) */
void add_to_dictionary(void *, void *, DictionaryCorePtr);
void add_to_dictionary_hexkey(long, void *, DictionaryCorePtr);
void add_to_dictionary_hexkey_hexsymbol(long, long, void *, DictionaryCorePtr);
void* search_dictionary(void *, DictionaryCorePtr);
void* search_dictionary_hexkey(long, DictionaryCorePtr);
void delete_from_dictionary(void *, DictionaryCorePtr);
void delete_from_dictionary_hexkey(long, DictionaryCorePtr);

#endif
