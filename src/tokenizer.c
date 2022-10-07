#include "tokenizer.h"
#include <stdio.h>


int main(){
  char *p = "  hello";
  *p = *word_start(p);
}

int space_char(char c){
  if((c == '\t') && (c == ' ')){
    return 1;
  }
  return 0;
}
//=-=-=-=-==-==-=-=--=-=-=-=-=-=-=-=-=-=-
int non_space_char(char c){
  if((c != '\t') && (c != ' ')){
    return 1;
  }
  return 0;
}
//-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=
char *word_start(char *str){
  while(*str){
    int c = non_space_char(*str);
    if(c == 1){
      break;
    }
    str++;
  }
  printf("%s\n", str);
  return str;
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
/*
char *word_terminator(char *word){
}

//-=-=-=--=-=-=--=--=--=-=-=-=--=-=--=-=-=-=

int count_words(char *str){
}

//-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

char *copy_str(char *inStr, short len){
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

char **tokenize(char* str){
}

//-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

void print_tokens(char **tokens){

}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
 
void free_tokens(char **tokens){
  int i = 0;

}
*/
