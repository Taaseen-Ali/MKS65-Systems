#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node* n){
  printf("[");
  struct node* current = n;
  while(current){
    printf("%d,  ", current->i);
     current = current->next;
  }
  printf("] \n");
}


struct node* insert_front(struct node* start, int i){
  struct node* pn = malloc(sizeof(struct node));
  pn->i = i;
  pn->next = start;
  return pn;
}

struct node* free_list(struct node* n){
  struct node * current = n;
  while(current){
    struct node * next_node = current->next;
    free(current);
    current = next_node;
  }
  n=0;
  return NULL;
}
    
