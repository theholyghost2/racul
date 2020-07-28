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

	d = (DictionaryCorePtr)malloc(len * sizeof PairPtr);

	do {
		*d++->key = NULL;
		*d++->value = NULL;
	} while (--len >= 0);

	return d;
}	

void free_dictionary(DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof PairPtr;

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
void add_to_dictionary(void *xkey, void *xvalue, DictionaryCorePtr d)
{
	PairPtr p = (PairPtr)malloc(sizeof PairPtr);
	int len = sizeof(d) / sizeof PairPtr;
	KeyPtr key = (KeyPtr)malloc(sizeof KeyPtr); 
	ValuePtr value = (ValuePtr)malloc(sizeof ValuePtr); 

	key->x = xkey;
	value->y = xvalue;
	p->key = key;
	p->value = value;
	
	while (len-- >= 0 && *d++->key != NULL)
		;

	*d = p;

	return;
}

void search_dictionary(void *key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof PairPtr;

	while (*d++->key != key)
		;

	if (len <= 0)
		return NULL;
	else 
		return (*d--)->value;
}

void delete_from_dictionary(void *key, DictionaryCorePtr d)
{
	int len = sizeof(d) / sizeof PairPtr;
	PairPtr p = *d;

	while (*d++->key != key)
		p++;

	if (*d->key != NULL)
		free(*d->key);
	if (*d->value != NULL)
		free(*d->value);

	free(*d++);
	p = *d;	
}

