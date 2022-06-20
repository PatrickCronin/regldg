/*
** altlist.h
** A list of alts.
*/

#ifndef ALTLIST_H
#define ALTLIST_H

#include <stdio.h>
#include "alt.h"

struct _altlist {
    alt * list;
    int size;
};
typedef struct _altlist altlist_struct;
typedef struct _altlist *altlist;

altlist altlist_constructor (void);
void altlist_insert (altlist, alt);
void altlist_free (altlist);
int altlist_get_cur(altlist, int, int);
#endif
