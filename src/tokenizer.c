#include <stdio.h>
#include "tokenizer.h"

int main() {
  char input[20];
  puts("->");
  scanf("%s", input);

  space_char(input[0]); 
}

int space_char(char c) {
  if (c == 't' || c == ' ') {
    puts("def a tab or space");
    return 1;
  }
  puts("def NOT, returning 0");
  return 0;
}
