#include <stdio.h>
#include "tokenizer.h"

int main() {

  char input[100];
  printf("Enter a sentence!\n>> ");
  fgets(input, sizeof(input), stdin);  // read string
  //printf("Input: ");
  //puts(input);    // display string
  
  int test = count_words(input);
  printf("%d\n", test);

  copy_str(input, 19);

  //testing tokenize
  char **tokens = tokenize(input);
  print_tokens(tokens); 

  return 0; 
}
