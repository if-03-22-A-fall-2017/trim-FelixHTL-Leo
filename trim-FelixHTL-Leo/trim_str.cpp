#include <stdio.h>
#include <string.h>
#include "trim.h"

int main(int argc, char const *argv[]) {
  printf("Argumente: \n");
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  char* char_field[512];
  //strcpy(char_field, argv);

  //trim(argv,char_field);
  //for (int i = 0; i < strlen(char_field); i++) {
    //printf("%s\n", char_field[i]);
  //}
  return 0;
}
