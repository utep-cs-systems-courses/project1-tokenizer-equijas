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

char *get_history(List *list, int id) {
  Item *node = list->root;

  while (node != NULL) {
    if (node->id == id) {
      return node->str;
    }
    node = node->next;
  }
  return NULL;
}

void print_history(List *list) {
  Item *node = list->root;
  if(node == NULL) {
    printf("History is empty\n");
    return;
  }
  while (node != NULL) {
    printf("[%d] %s\n",node->id, node->str);
    node = node->next;
  }
}

void free_history(List *list) {
  Item *node = list->root;
  while (node != NULL) {
    free(node);
    node = node->next;
  }
  free(list);
}
