#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int main() {
  char input[20];
  printf("->");
  fgets(input, 20, stdin);

  int count = 2; 
  printf("%d", count); 
}

int space_char(char c) {
  switch (c) {
  case '\t':
    return 1;
    break; 
  case ' ':
    return 1;
    break; 
  case '\n':
    return 1;
    break; 
  case '\0':
    return 1;
    break; 
  default:
    return 0;
    break; 
  }

}

int non_space_char(char c) {
  switch (c) {
  case '\t':
    return 1; 
    break; 
  case ' ':
    return 1;
    break; 
  case '\n':
    return 1;
    break; 
  case '\0':
    return 1;
    break; 
  default:
    return 0;
    break; 
  } 
}

char *word_start(char *s) {  
  while (space_char(*s)) {
    s++;
  }
  return s; 
}

char *word_terminator(char *word) {
  while (non_space_char(*word)) {
    word++;
  }
  return word; 
}

int count_words(char *s) {
  int word_count = 0;
  while (*s != '\0') {
    s = word_start(s);
    s = word_terminator(s);
    word_count++; 
  }
  return word_count; 
}

