/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

#include "dictionary.h"

#include <stdlib.h> /* includes NULL and memory management (malloc, free) */

DictionaryCorePtr make_dictionary(long len, DictionaryCorePtr d) {

#ifdef _DEBUG
	if (len <= 0) {
		fprintf(stderr, "made a dictionary of length %d <= 0. 
				returning NULL as DictionaryCorePtr.\n", len);
		return NULL;
	}
#endif

	d = (DictionaryCorePtr)malloc(len * sizeof DPairPtr);

	do {
		*d++->key = NULL;
		*d++->value = NULL;
	} while (--len >= 0);

	return d;
}	

void free_dictionary(DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof DPairPtr;

	do {
		if (*d != NULL) {
			if (*d->key != NULL)
				free(*d->key);
			if (*d->value != NULL)
				free(*d->value);

			free(*d);

			*d++;

	} while (--len >= 0);

	free(d);
}

/* The dictionary has no NULL keys */
void add_to_dictionary(void *xkey, void *yvalue, DictionaryCorePtr d)
{
	DPairPtr p = (DPairPtr)malloc(sizeof DPairPtr);
	int len = sizeof(d) / sizeof DPairPtr;
	DKeyPtr key = (DKeyPtr)malloc(sizeof DKeyPtr); 
	DValuePtr value = (DValuePtr)malloc(sizeof DValuePtr); 

	key->x = xkey;
	key->i = INT_MAX;
	value->i = INT_MAX;
	value->y = yvalue;
	p->key = key;
	p->value = value;
	
	while (len-- >= 0 && *d++->key != NULL)
		;

	*d = p;

	return;
}

void add_to_dictionary_hexkey(int xkey, void *yvalue, DictionaryCorePtr d)
{
	DPairPtr p = (DPairPtr)malloc(sizeof DPairPtr);
	int len = sizeof(d) / sizeof DPairPtr;
	DKeyPtr key = (DKeyPtr)malloc(sizeof DKeyPtr); 
	DValuePtr value = (DValuePtr)malloc(sizeof DValuePtr); 

	key->i = xkey;
	key->x = NULL;
	value->i = INT_MAX;
	value->y = yvalue;
	p->key = key;
	p->value = value;
	
	while (len-- >= 0 && *d++->key != NULL)
		;

	*d = p;

	return;
}

void add_to_dictionary_hexkey_hexsymbol(int xkey, int yi, void *yvalue, DictionaryCorePtr d)
{
	DPairPtr p = (DPairPtr)malloc(sizeof DPairPtr);
	int len = sizeof(d) / sizeof DPairPtr;
	DKeyPtr key = (DKeyPtr)malloc(sizeof DKeyPtr); 
	DValuePtr value = (DValuePtr)malloc(sizeof DValuePtr); 

	key->i = xkey;
	key->x = NULL;
	value->i = yi;
	value->y = yvalue;
	p->key = key;
	p->value = value;
	
	while (len-- >= 0 && *d++->key != NULL)
		;

	*d = p;

	return;
}

void* search_dictionary(void *key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof DPairPtr;

	while (*d++->key->x != key) // FIXME holly, maybe memcmp
		;

	if (len <= 0)
		return NULL;
	else 
		return (*d--)->value;
}

void* search_dictionary_hexkey(int key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof DPairPtr;

	while (*d++->key->i != key)
		;

	if (len <= 0)
		return NULL;
	else 
		return (*d--)->value;
}

void delete_from_dictionary(void *key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof DPairPtr;
	DPairPtr p = *d;

	while (*d++->key->x != key)
		p++;

	if (*d->key != NULL)
		free(*d->key);
	if (*d->value != NULL)
		free(*d->value);

	free(*d++);
	p = *d;	
}

void delete_from_dictionary_hexkey(int key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof DPairPtr;
	DPairPtr p = *d;

	while (*d++->key->i != key)
		p++;

	if (*d->key != NULL)
		free(*d->key);
	if (*d->value != NULL)
		free(*d->value);

	free(*d++);
	p = *d;	
}


