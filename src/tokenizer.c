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
    puts("tab/space");
    return 1;
  }
  puts("not t/s");
  return 0;
}

int non_space_char(char c) {
  if (c == '\t' || c == ' ') {
    return 0; 
  }
  return 1; 
}

char *word_start(char *s) { 
  while(space_char(*s)) {
    s++;   
  }
  return s; 
}

char *word_terminator(char *word) {
  while(non_space_char(*word)) {
    word++; 
  }
  return word; 
}
