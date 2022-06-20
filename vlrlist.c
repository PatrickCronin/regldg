/*
** vlrlist.c
** A list of vlrs.
*/

#include <stdio.h>
#include <stdlib.h>
#include "vlr.h"
#include "vlrlist.h"
#include "memory.h"

vlrlist vlrlist_constructor (void)
{
    vlrlist newlist = (vlrlist) check_malloc (sizeof(vlrlist_struct));
    newlist->list = NULL;
    newlist->size = 0;
    return (newlist);
}

void vlrlist_insert (vlrlist l, vlr rec)
{
    l->size++;
    l->list = (vlr *) check_realloc (l->list, sizeof(vlr) * l->size);
    l->list[l->size-1] = rec;
}

void vlrlist_free (vlrlist l)
{
    int i;
    
    for (i = 0; i < l->size; i++) {
	free(l->list[i]);
    }
    
    free(l->list);
    l->size = 0;
}

int vlrlist_get_cur_length (vlrlist vlist, int tnode_id)
{
    int vlist_cnt = 0;

    while (vlist_cnt < vlist->size) {
	if (vlist->list[vlist_cnt]->id == tnode_id) {
	    return (vlist->list[vlist_cnt]->cur);
	}
	vlist_cnt++;
    }
    
    fprintf(stderr, "vlist: getting current length of a non-existent tnode!\n");
    exit (-1);
}
