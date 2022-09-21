#include "tokenizer.h"
#include <stdio.h>

int space_char(char c){
  putchar(c);
  if(c == '\t' || c == ' '){
    return 0;
  }
  return 1;
}

int non_space_char(char c){
  if(c != '\t' || c != ' '){
    return 0;
  }
  return 1;
}
/*
char *word_start(char *str){
  
}

char *word_terminator(char *word){
}

int count_words(char *str){
}

char *copy_str(char *inStr, short len){
}

char **tokenize(char* str){
  char token = strtok(str, " ");

  while (token != NULL){
    printf("\n", token);
    token = strtok(NULL, " ");
  }

  return 0;
}
*/
