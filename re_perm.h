/*
** re_perm.h
** A list of charsets.  When a single character from each of the
** charsets is selected, a single word of the regular expression
** grammar is created.
*/

#ifndef RE_PERM_H
#define RE_PERM_H

#include "char_set.h"
#include "silist.h"

struct _perm_atom {
    char_set chars;
    silist in_groups;
    int backref_id;
};
typedef struct _perm_atom perm_atom_struct;
typedef struct _perm_atom* perm_atom;

perm_atom perm_atom_constructor (void);

struct _re_perm {
    perm_atom * list;
    int length;
};
typedef struct _re_perm re_perm_struct;
typedef struct _re_perm *re_perm;

re_perm re_perm_constructor (void);
void re_perm_insert (re_perm, perm_atom);
void re_perm_free (re_perm);

int re_perm_permute (re_perm, int);
void re_perm_display_current (re_perm);
void re_perm_generate_words (re_perm);
void re_perm_create_word (re_perm, char_set);
void re_perm_add_backref_text (re_perm, char_set, int, int);
void re_perm_output_word (char_set);

#endif
