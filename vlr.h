/*
** vlr.c
** A record to keep track of alternations and variable length nodes.
*/

#ifndef VLR_H
#define VLR_H

struct _variablelengthrecord {
    int id;
    int min;
    int max;
    int cur;
};
typedef struct _variablelengthrecord variablelengthrecord;
typedef struct _variablelengthrecord *vlr;

vlr vlr_constructor (void);

void vlr_set_id (vlr, int);
void vlr_set_min (vlr, int);
void vlr_set_max (vlr, int);
void vlr_set_cur (vlr, int);

int vlr_get_id (vlr);
int vlr_get_min (vlr);
int vlr_get_max (vlr);
int vlr_get_cur (vlr);

#endif
