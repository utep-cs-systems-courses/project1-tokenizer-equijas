#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int space_char(char c) {
  if (c == '\t' || c == ' ' || c == '\n') {
    return 1; 
  }
  return 0; 
 }

int non_space_char(char c) {
 if (c == '\t' || c == ' ' || c == '\n' || c == '\0') {
    return 0;
  }
  return 1;
}

char *word_start(char *s) {  
  while (space_char(*s)) {
    s++;
  }
  // puts(s); 
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
    s = word_terminator(s);
    s = word_start(s);
    word_count++; 
  }
  return word_count; 
}

