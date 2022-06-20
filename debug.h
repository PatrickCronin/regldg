/*
** debug.h
** Debugging print functions.
*/

#ifndef REGLDG_DEBUG_H
#define REGLDG_DEBUG_H

/* Define Output Classes */
#define D_Error 1
#define D_Program_Args 2
#define D_Char_Set 4
#define D_Parse_Regex 8
#define D_Parse_Regex_Eachstep 16

void debug_print(int, const char *, ...);

#endif
