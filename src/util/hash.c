/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */
#include "hash.h"

/* constructors, destructors */

HashCorePtr make_hash(long len, HashCorePtr hp)
{
	DictionaryCorePtr dcp = hashdict(h);
	hp->dict = make_dictionary(len, dcp);
	//hash func
	hp->hashf = make_hashfunction(hp);	

	return hp;
}

void free_hash(HashCorePtr hp)
{
	free_dictionary(hashdict(h));
	// hash func
	free_hashfunction(hp);
}

/* get, set and access */

/* The hash has no NULL keys (FIXME if needed) */
void add_to_hash(void *key, void *value, HashCorePtr hp)
{
	add_to_dictionary(key, value, hp->dict);
}

void add_to_hash_hexkey(int xi, void *value, HashCorePtr hp)
{
	add_to_dictionary_hexkey(xi, value, hp->dict);
}

void search_hash(void *key, HashCorePtr hp)
{
	return (search_dictionary_hexkey(key, hp->dict));
}

void search_hash_hexkey(int xi, HashCorePtr hp)
{
	return (search_dictionary_hexkey(xi, hp->dict));
}

void delete_from_hash(void *, HashCorePtr)
{}

