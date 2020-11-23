/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef struct _key {
	void *x;
} DKey;

typedef struct _key *DKeyPtr;

typedef struct _value {
	void *y;
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

/* get, set and access */

/* The dictionary has no NULL keys (FIXME if needed) */
void add_to_dictionary(void *, void *, DictionaryCorePtr);
void search_dictionary(void *, DictionaryCorePtr);
void delete_from_dictionary(void *, DictionaryCorePtr);

