/*
** altlist.c
** A list of alts.
*/

#include <stdio.h>
#include <stdlib.h>
#include "alt.h"
#include "altlist.h"
#include "memory.h"

altlist altlist_constructor (void)
{
    altlist newlist = (altlist) check_malloc (sizeof(altlist_struct));
    newlist->list = NULL;
    newlist->size = 0;
    return (newlist);
}

void altlist_insert (altlist l, alt rec)
{
    l->size++;
    l->list = (alt *) check_realloc (l->list, sizeof(alt) * l->size);
    l->list[l->size-1] = rec;
}

void altlist_free (altlist l)
{
    int i;

    for (i = 0; i < l->size; i++) {
	free(l->list[i]);
    }

    free(l->list);
    l->size = 0;
}

int altlist_get_cur (altlist alist, int tnode_id, int occurrence_id)
{
    int alist_cnt = 0;

    while (alist_cnt < alist->size) {
		if ((alist->list[alist_cnt]->id1 == tnode_id) &&
			(alist->list[alist_cnt]->id2 == occurrence_id)) {
			return (alist->list[alist_cnt]->cur);
		}
		alist_cnt++;
    }

    fprintf(stderr, "alist: getting current length of a non-existent tnode!\n");
    exit (-1);
}
