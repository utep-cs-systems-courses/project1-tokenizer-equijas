#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokenizer.h"
#include "history.h"


List* init_history() {
  List *history = (List*) malloc(sizeof(List)*100);
  history->root = NULL;
  return history; 
}

void add_history(List *list, char *str) {
  Item *new_record = (Item*) malloc(sizeof(Item));
  new_record->str = copy_str(str, strlen(str));
  new_record->next = NULL;

  if (list->root == NULL) {
    list->root = new_record;
    new_record->id = 1;
  } else {
    Item *head = list->root;
    while(head->next != NULL) {
      head = head->next;
    }
    new_record->id = (head->id) + 1;
    head->next = new_record;
  }
}
