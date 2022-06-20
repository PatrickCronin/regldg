/*
** alt.h
** A record to keep track of alternation nodes.
*/

#ifndef ALT_H
#define ALT_H

struct _alternationrecord {
    int id1;
    int id2;
    int min;
    int max;
    int cur;
};
typedef struct _alternationrecord alternationrecord;
typedef struct _alternationrecord *alt;

alt alt_constructor (void);

void alt_set_id1 (alt, int);
void alt_set_id2 (alt, int);
void alt_set_min (alt, int);
void alt_set_max (alt, int);
void alt_set_cur (alt, int);

int alt_get_id1 (alt);
int alt_get_id1 (alt);
int alt_get_min (alt);
int alt_get_max (alt);
int alt_get_cur (alt);

#endif
