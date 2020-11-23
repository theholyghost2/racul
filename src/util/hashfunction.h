/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

typedef struct _hashfunction {
	void (*func)(unsigned long);
} *_HashFunctionPtr;

/* hash function ctor and dtor */

_HashFunctionPtr make_hashfunction(_HashFunctionPtr);
_HashFunctionPtr free_hashfunction(_HashFunctionPtr);

/* hashing functionality */

long hashf(unsigned long size, _HashFunctionPtr hfp);

#ifdef _HASH_FUNCTION_MODULUS
//FIXME	
#else
#endif	
#ifdef _HASH_FUNCTION_CHAOS0
//FIXME	
#else
long hash_with_modulus(long); 
#endif
