/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef struct _key {
	void *x;
} Key;

typedef struct _key *KeyPtr;

typedef struct _value {
	void *y;
} Value;

typedef struct _value *ValuePtr;

typedef struct _pair {
	KeyPtr key;
	ValuePtr value;
} Pair;

typedef struct _pair *PairPtr;

typedef PairPtr *DictionaryCorePtr;

/* constructors, destructors */

DictionaryCorePtr make_dictionary(long, DictionaryCorePtr);
void free_dictionary(DictionaryCorePtr);

/* get, set and access */

/* The dictionary has no NULL keys (FIXME if needed) */
void add_to_dictionary(void *, void *, DictionaryCorePtr);
void search_dictionary(void *, DictionaryCorePtr);
void delete_from_dictionary(void *, DictionaryCorePtr);

