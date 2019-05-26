#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "node.h"
void print_list(struct node *list)
{
  //creates a variable to store the value of list
  //so lit itself does not change
  struct node *current = list;
		
  //as long as the current node is not NULL
  while(current)
    {
      //print the value of the current node, then set the current
      //node to the next one in the linked list
      printf("Song: %s\n", current->song);	
      printf("Artist: %s\n\n", current->artist);
      current = current->next;
    }
}

struct node * insert_front(struct node *list, char _artist[100], char _song[100])
{
  //make a new node, assign it the value given
  struct node *new_first = malloc(sizeof(struct node));
  strcpy(new_first->song, _song);	
  strcpy(new_first->artist, _artist);

  //set it's next variable to the list given, since that 
  //is the first node
 
  new_first->next = list;
    
  //return the new list
  return new_first;
}



struct node * insert_order(struct node *list, char _artist[100], char _song[100])
{
  //create copy of original front node for later comparison
  struct node *front = list;
  //generate new node and occupy it with the necessary values
  struct node *new_node = malloc(sizeof(struct node));
  strcpy(new_node->song, _song);	
  strcpy(new_node->artist, _artist);

  //loop thru the artists alphabetically
  while( list->next && strcmp(_artist, (list->next)->artist) > 0 )
    {
      list = list->next;
      //printf("%s", list->artist); debugging purposes
    }

  //loop thru the songs alphabetically
  while( list->next && strcmp((list->next)->artist, _artist)==0 && strcmp(_song, (list->next)->song) > 0 )
    {
      list = list->next;
    }
  //if the node should go in the front, just use our insert_front function
  if(!list)
    {
      front = insert_front(list,_artist, _song);
    }
  else	//otherwise, insert the node by changing what list->next points to
    {
      new_node->next = list->next;
      list->next = new_node;
    }
  //return the very first node of the list (esentially, returning the list)
  return front;
}

struct node *free_list(struct node *list)
{
  //as long as the list isn't null
  while(list)
    {
      //makes a temp variable to store the next value
      struct node *temp = list->next;
      free(list);	//frees the old value
      //set the list to the next value
      list = temp;
    }
  //return the now-empty list
  return list;
}

struct node * find_song_artist(struct node *list, char _artist[100], char _song[100])
{
  while(list)
    {
      if (strcmp(list->song, _song) == 0 && strcmp(list->artist, _artist) == 0)
	{
	  return list;
	}
      list = list->next;
    }
  printf("song not found \n\n");
  return NULL;
}

struct node * find_artist(struct node *list, char _artist[100])
{
  while(list)
    {
      if(!strcmp(list->artist, _artist))
	{
	  return list;
	}
      list = list->next;
    }
  return NULL;
}

struct node * find_random(struct node* list){
  struct node * front = list;
  int sum = 0;
  while(front){
    front = front->next;
    sum++;
  }
  int n=rand()%sum;
  while(n--){
    list=list->next;
  }
  return list;
  
}

struct node* remove_song(struct node* list, struct node* rem){
  struct node * front = list;
  if(list==rem){
    front = list->next;
    free(list);
    return front;
  }
  while(list->next){
    if(list->next==rem){
      struct node * temp = list->next->next;
      free(list->next);
      list->next=temp;
      return front;
    }
    list = list->next;
  }
}
      
