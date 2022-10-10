#include <stdio.h>
#include <string.h>
#include "tokenizer.h"
#include "history.h"

int main() {
  List *program_history =init_history(); 
  char input[100];
  int done = 0;

  while (done == 0) {
    printf("\tWelcome! Enter a sentence below!\n\tEnter 'h' for history\n\tEnter 'q' to quit\n>> ");
    fgets(input, sizeof(input), stdin);  // read string
    

    if (strcmp(input, "h\n") == 0) {
      print_history(program_history); 
    }
    else if (strcmp(input,"q\n") == 0) {
        // printf("quitting\n");
	done = 1; 
	break; 
    }
    else {
      add_history(program_history, input);
      int word_count = count_words(input);
      printf("Number of words: %d\n", word_count);
      char **tokens = tokenize(input);
      print_tokens(tokens);
      free_tokens(tokens); 
    }
  }

  printf("See you later!\n");
  free_history(program_history);
  return 0;
   
}
