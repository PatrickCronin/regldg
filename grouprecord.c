/*
** grouprecord.c
** A record to remember features about a group.
*/

#include <stdio.h>
#include <stdlib.h>
#include "grouprecord.h"
#include "memory.h"
#include "tnode.h"

group group_constructor (void)
{
    group newgroup = (group) check_malloc (sizeof(group_record));
    newgroup->node = NULL;
    newgroup->current_length = 0;
    return (newgroup);
}

tnode group_get_node (group g)
{
    return (g->node);
}

int group_get_length (group g)
{
    return (g->current_length);
}

void group_set_node (group g, tnode t)
{
    g->node = t;
}

void group_set_length (group g, int l)
{
    g->current_length = l;
}
