#include <stdio.h>
#include "tokenizer.h"

int main() {
  char input[20];
  puts("->");
  scanf("%s", input);

  word_start(input); 
}

int space_char(char c) {
  if (c == '\t' || c == ' ') {
    puts("def a tab or space");
    return 1;
  }
  puts("def NOT, returning 0");
  return 0;
}

int non_space_char(char c) {
  if (c == '\t' || c == ' ') {
    return 0; 
  }
  return 1; 
}

char *word_start(char *s) { 
  for (int i = 0; i < 3; i++) {
    printf("%c\n", s[i]); 
  }
  return "c"; 
}
