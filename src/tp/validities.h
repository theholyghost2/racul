/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

const char* validities[] = {
	/* commutativity */
	"or p q <-> or q p",
	"and p q <-> and q p",

	/* associativity */
	"( and p q ) and r <-> and p ( and q r)",
	"( or p q ) or r <-> or p ( q or r )",

	/* distributivity */
	"and p ( or q  r ) <-> or ( and p q ) ( and p r )",
	"or p ( and q  r) <-> and ( or p q ) ( or p r )",

	/* other properties */
	"-> p ( -> q r ) <-> -> ( and p q ) r",
	"-> ( or p q ) r <-> and ( -> p q ) ( -> q r)",

 	"\0",
	/* optional */
	"not ( and x y ) -> not x and not y",
}	
