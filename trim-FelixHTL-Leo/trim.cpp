/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include "trim.h"

#define STRLEN 16
void trim(const char* source, char* trimmed_string){
  int length = strlen(source);
  if(length <= 0)
  {
    trimmed_string[0] = source[0];
  }
  else if (no_blanks_at_begin_and_end(source, length)) {
    for (int i = 0; i < STRLEN; i++) {
      trimmed_string[i] = source[i];
    }
  }
  else {
    char copy_over[STRLEN];
    bool check = false;
    if(source[0] != ' '){
      check = true;
    }
    int count = 0;
    for (int i = 0; i < STRLEN; i++) {
      if(current_and_next_is_blank(source, i)){}
      else if(current_is_blank_next_something_else(source, i, check)){
        check = true;
      }
      else if(current_is_blank_next_slash_null(source, i)){}
      else{
        copy_over[count] = source[i];
        count++;
      }
    }
    for (int i = 0; i < strlen(copy_over); i++) {
      trimmed_string[i] = copy_over[i];
    }
  }
}


bool no_blanks_at_begin_and_end(const char* text, int text_length)
{
  return (text[0] != ' ' && text[text_length - 1] != ' ');
}

bool current_and_next_is_blank(const char* text, int position){
  return (text[position] == ' ' && text[position + 1] == ' ');
}

bool current_is_blank_next_slash_null(const char* text, int position){
  return (text[position] == ' ' && text[position + 1] == '\0');
}

bool current_is_blank_next_something_else(const char* text, int position, bool check){
  return (text[position] == ' ' && text[position + 1] != ' ' && check == false);
}
