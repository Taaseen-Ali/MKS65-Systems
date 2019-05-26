#include <stdio.h>
#include <stdlib.h>
#include "list.h"
    
int main(){
  struct node* start;
  printf("printing empty list: \n");
  print_list(start);
  printf("inserting 2,3: \n");
  start  = insert_front(insert_front(start, 2), 3);
  print_list(start);
  printf("inserting 1,5: \n");
  start = insert_front(start, 1);
  start = insert_front(start, 5);
  print_list(start);
  printf("freeing list: \n");
  free_list(start);
  print_list(start);
  return 0;

  
}
