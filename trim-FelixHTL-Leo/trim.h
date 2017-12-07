/*----------------------------------------------------------
*                              HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:                       trim.h
* Author:                      P. Bauer
* Due Date:            March 14, 2015
* ----------------------------------------------------------
* Description:
* Interface for trim
* ----------------------------------------------------------
*/
#ifndef ___TRIM_H
#define ___TRIM_H

bool no_blanks_at_begin_and_end(const char* text, int text_length);
bool current_and_next_is_blank(const char* text, int position);
bool current_is_blank_next_slash_null(const char* text, int position);
bool current_is_blank_next_something_else(const char* text, int position, bool check);
void trim(const char* source, char* trimmed_string);
#endif
