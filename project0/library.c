#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

void init_table(struct node * table[27]){
  for(int i=0; i<27; i++)
    table[i] = NULL;
}

void insert(struct node * table[27], char _artist[100], char _song[100]){
  int index = _artist[0]-'a';
  if(table[index]==NULL){
    table[index] = insert_front(table[index], _artist, _song);
  }
  else{
    table[index] = insert_order(table[index], _artist, _song);
  }
}


struct node * search(struct node* table[27], char _artist[100], char _song[100]){
  int index = _artist[0]-'a';
  return find_song_artist(table[index], _artist, _song);
}

struct node * search_artist(struct node* table[27], char _artist[100]){
  int index = _artist[0]-'a';
  return find_artist(table[index], _artist);
}

void print_node(struct node* n){
  printf("Song: %s\nArtist: %s\n\n", n->song, n->artist);
}

void print_alpha(struct node* table[27], char letter){
  int index = letter-'a';
  print_list(table[index]);
}

void print_artist(struct node* table[27], char _artist[100]){
  struct node * first_s = search_artist(table, _artist);
  while(first_s && strcmp(_artist, first_s->artist)==0){
    print_node(first_s);
    first_s= first_s->next;
  }
}

void print_all(struct node* table[27]){
  for(int i=0;i<27; i++){
    print_list(table[i]);
  }
}

void shuffle(struct node* table[27]){
  for(int i=0; i<50;i++){;
    if(table[i%27]!=NULL){
      print_node(find_random(table[i%27]));
    } 
  }
}

struct node* delete(struct node* table[27], char _artist[100], char _song[100]){
  int index = _artist[0] - 'a';
  struct node* to_dlt = search(table, _artist, _song);
  table[index] = remove_song(table[index], to_dlt);
}

void clear(struct node* table[27]){
  for(int i=0; i<27; i++){
    if(table[i] != NULL)
      table[i] = free_list(table[i]);
  }
}
