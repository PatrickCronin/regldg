/*
** build_structs.h
** Read the element tree, and build permutation structures
** for each possible arrangement of the varying length
** quantifiers.
*/

#ifndef BUILDSTRUCTS_H
#define BUILDSTRUCTS_H

#include <stdio.h>
#include <stdlib.h>
#include "alt.h"
#include "altlist.h"
#include "grouprecord.h"
#include "grouplist.h"
#include "re_perm.h"
#include "tnode.h"
#include "vlr.h"
#include "vlrlist.h"

void buildstructs_gvlists (tnode, grouplist, vlrlist, altlist);
void buildstructs_fill_perm (re_perm, tnode, grouplist, vlrlist, altlist);
int buildstructs_new_perm (tnode, vlrlist, altlist);
int buildstructs_perm_vlist (vlrlist, int);
int buildstructs_perm_alist (altlist, int);
int buildstructs_is_useless_perm (tnode, vlrlist, altlist, int);
#endif
