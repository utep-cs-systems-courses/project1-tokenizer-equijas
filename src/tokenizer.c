#include <stdio.h>
#include "tokenizer.h"

int main() {
  char input[20];
  puts("->");
  scanf("%s", input);

  puts(word_start(input));
  // puts(word_terminator(input));  
}

int space_char(char c) {
  if (c == '\t' || c == ' ') {
    return 1;
  }
  return 0;
}

int non_space_char(char c) {
  if (c == '\t' || c == ' ') {
    printf("%c\n", c); 
    return 0; 
  }
  printf("%c\n", c); 
  return 1; 
}

char *word_start(char *s) { 
  char *p = malloc(6);
  // printf("%c", *p); 
  if(non_space_char(*s)) {
    puts("word start, yes");
    p = s; 
    printf("%c\n", *p); 
    return p;
  }
  puts("returning p"); 
  return p; 
}

char *word_terminator(char *word) {
  while(non_space_char(*word)) {
    word++; 
  }
  return word; 
}
