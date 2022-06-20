/*
** grouprecord.h
** A record to remember features about a group.
*/

#ifndef GROUP_RECORD_H
#define GROUP_RECORD_H

#include "tnode.h"

struct _group_record {
    tnode node;
    int current_length;
};
typedef struct _group_record group_record;
typedef struct _group_record *group;


group group_constructor (void);
tnode group_get_node (group);
int group_get_length (group);
void group_set_node (group, tnode);
void group_set_length (group, int);

#endif
