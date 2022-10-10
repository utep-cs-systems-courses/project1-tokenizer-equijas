#include <stdio.h>
#include "tokenizer.h"

int main() {

  char input[30];
  printf("Enter a sentence!\n>> ");
  fgets(input, sizeof(input), stdin);  // read string
  // printf("Input: ");
  // puts(input);    // display string
  return 0;
  
  // printf("%d", count_words(input));

  return 0; 
}
