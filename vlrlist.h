/*
** vlrlist.c
** A list of vlrs.
*/

#ifndef VLRLIST_H
#define VLRLIST_H

#include <stdio.h>
#include "vlr.h"

struct _vlrlist {
    vlr * list;
    int size;
};
typedef struct _vlrlist vlrlist_struct;
typedef struct _vlrlist *vlrlist;

vlrlist vlrlist_constructor (void);
void vlrlist_insert (vlrlist, vlr);
void vlrlist_free (vlrlist);
int vlrlist_get_cur_length(vlrlist, int);

#endif
