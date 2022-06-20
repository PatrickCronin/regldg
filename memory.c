/*
** memory.c
** Safe functions for memory usage.
*/

#include <stdio.h>
#include <stdlib.h>
#include "memory.h"

void * check_malloc (size_t size)
{
    void * ptr = malloc (size);
    if (!ptr) {
	fprintf(stderr, "check_malloc: out of memory! (fatal)\n");
	exit(-1);
    }
    return ptr;
}

void * check_realloc (void * place, size_t new_size)
{
    place = realloc (place, new_size);
    if (!place) {
	fprintf(stderr, "check_realloc: out of memory! (fatal)\n");
	exit(-1);
    }
    return place;
}

void * check_calloc (size_t num_els, size_t el_size)
{
    void * ptr = calloc (num_els, el_size);

    if (!ptr) {
	fprintf(stderr, "check_malloc: out of memory! (fatal)\n");
	exit(-1);
    }
    return ptr;
}
