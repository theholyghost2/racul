/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* prefixed logical validities */

const char* validities[] = {
	/* commutativity */
	"and p q <-> and q p",
	"or p q <-> or q p",

	/* associativity */
	"and ( and p q ) r <-> and p ( and q r )",
	"or ( or p q ) r <-> or p ( or q r )",

	/* distributivity */
	"and p ( or q r ) <-> or ( and p q ) ( and p r )",
	"or p ( and q r) <-> and ( or p q ) ( or p r )",

	/* other properties */
	"-> p ( -> q r ) <-> -> ( and p q ) r",
	"-> ( or p q ) r <-> and ( -> p r ) ( -> q r)",
	"not ( or p q ) <-> and not p not q",
	"or not p not q <-> not ( and p q )",
	/* FIXME "not ( and p not p) <->",   */
	"and p not q <-> not ( -> p q )",
	"not p <-> -> p q",
	"or not p q <-> -> p q",
	"or p false <-> p",
	"and p false <-> false",
	/* FIXME "not ( <-> p not p )", */	
	"-> p q <-> -> not q not p",
	/* these require classical reasoing */
	"or ( -> p r ) s <-> or ( -> p r ) ( -> p s )",
	"not ( and p q ) <-> or not p not q",
	"not ( -> p q ) <-> and p not q",
	"-> p q <-> or not p q",
	"-> not q not p <-> -> p q",
	/* FIXME "or p not p" */
 	"\0",
	/* optional */
}	
