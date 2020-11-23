/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "dictionary.h"
#include "hashfunction.h"

typedef struct _hash {
	_HashFunctionPtr hashf; 
	DictionaryCorePtr dict;
} *HashCorePtr; 

//FIXME holly typedef HashPtr

/* accessor of hash ptr */

#define hashfunction(h) \
	return h->hfp \

#define hashdict(h) \
       return h->dict \

/* constructors, destructors */

HashCorePtr make_hash(long, HashCorePtr);
void free_hash(HashCorePtr);

/* get, set and access */

/* The hash has no NULL keys (FIXME if needed) */
void add_to_hash(void *, void *, HashCorePtr);
void add_to_hash_hexkey(int, void *, HashCorePtr);
void* search_hash(void *, HashCorePtr);
void* search_hash_hexkey(int, HashCorePtr);
void delete_from_hash(void *, HashCorePtr);

