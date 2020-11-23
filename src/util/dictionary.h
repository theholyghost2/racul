/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef struct _key {
	void *x;
	int i; // for e.g. functional hashing
} DKey;

typedef struct _key *DKeyPtr;

typedef struct _value {
	void *y; // value of symbol
	int i; // symbol table hex (memory ref) 
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

/* get, set and access, hexadecimal keys are integers, common functions use 
 * void* pointer
 */

/* The dictionary has no NULL keys (FIXME if needed, use hexkey functions) */
void add_to_dictionary(void *, void *, DictionaryCorePtr);
void add_to_dictionary_hexkey(int, void *, DictionaryCorePtr);
void add_to_dictionary_hexkey_hexsymbol(int, int, void *, DictionaryCorePtr);
void search_dictionary(void *, DictionaryCorePtr);
void search_dictionary_hexkey(int, DictionaryCorePtr);
void delete_from_dictionary(void *, DictionaryCorePtr);
void delete_from_dictionary_hexkey(int, DictionaryCorePtr);

