/*
** memory.h
** Safe functions for memory usage.
*/


#ifndef REGLDG_MEMORY_H
#define REGLDG_MEMORY_H

#include <stdio.h>

void * check_malloc (size_t);
void * check_realloc (void *, size_t);
void * check_calloc (size_t, size_t);

#endif
