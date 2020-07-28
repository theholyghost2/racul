/* Copyright (C) The Holy Ghost 2020. See the LICENSE file for details */

/* constructors, destructors */

/* FIXME private or public API */

void *make_lambda_symbol(void *);
void free_lambda_symbol(void *lsym);
void *make_variable_symbol(void *);
void free_variable_symbol(void *);

/* Simplest symbol accessors */
void *get_lambda_symbol_value(void *);

int get_variable_symbol_type(void *);
void *get_variable_symbol_value(void *);

/* dispatch and processing of symbols */
void process_symbol(void *);
void dispatch_symbol(void *);
