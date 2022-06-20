/*
** silist.c
** A simple list structure for integers.
** Best for small lists -- the list is stored in consecutive
** memory addresses.
*/

#ifndef SIMPLE_INTEGER_LIST
#define SIMPLE_INTEGER_LIST

struct _silist {
    int size;
    int * list;
};
typedef struct _silist silist_struct;
typedef struct _silist * silist;

silist silist_constructor(void);
void silist_init(silist);
int silist_find(silist, int);
int silist_get_size(silist);
int silist_get_element_n(silist, int);
void silist_insert(silist, int);
void silist_free(silist);
void silist_display(silist);
silist silist_copy_deep(silist);
void silist_remove_last(silist);

#endif
