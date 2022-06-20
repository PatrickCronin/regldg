/*
** grouplist.h
** A list of group records.
*/

#ifndef GROUPLIST_H
#define GROUPLIST_H

#include "grouprecord.h"
#include "tnode.h"

struct _grouplist {
    group * list;
    int size;
};
typedef struct _grouplist grouplist_struct;
typedef struct _grouplist *grouplist;

grouplist grouplist_constructor (void);
void grouplist_insert (grouplist, group);
void grouplist_free (grouplist);
tnode grouplist_get_group_tnode (grouplist, int);

#endif
