#include <stdio.h>
#include <string.h>
#include "tokenizer.h"
#include "history.h"

int main() {
  List *program_history =init_history(); 
  char input[100];
  printf("\tEnter a sentence!\n\tEnter 'h' for history\n>> ");
  fgets(input, sizeof(input), stdin);  // read string
  //printf("Input: ");
  //puts(input);    // display string


  if (strcmp(input, "h") == 0) {
    add_history(program_history, input);
    puts("inside"); 
  }
  
  int test = count_words(input);
  printf("%d\n", test);

  copy_str(input, 19);

  //testing tokenize
  char **tokens = tokenize(input);
  print_tokens(tokens); 

  return 0; 
}
