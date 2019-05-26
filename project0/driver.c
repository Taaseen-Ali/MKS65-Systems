//Rubin Peci and Taaseen Ali
//Period 5
//YUH DEXTER!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "node.h"
#include "library.h"

int main(){
  srand(time(NULL));
  printf("===LINKED LIST TESTS===\n");
  printf("===Inserting songs...===\n");
  printf("===Inserting front===\n");
  struct node * l = NULL;

  l = insert_front(l,"luis fonsi", "despacito");
  print_list(l);

  printf("===Inserting in order===\n");
  
  l = insert_order(l, "adele", "hello");
  l = insert_order(l, "adele", "rolling in the deep");
  l = insert_order(l, "zuckerberg", "lol privacy");
  l = insert_order(l, "playboi carti", "magnolia");
  l = insert_order(l, "famous dex", "japan");
  l = insert_order(l, "playboi carti", "old money");
  
  print_list(l);
  
  printf("===Looking for: hello, adele===\n");
  struct node * hello = find_song_artist(l, "adele", "hello");
  printf("found:\n");
  print_node(hello);

  printf("===Looking for: love story, taylor swift===\n");
  struct node * love_story = find_song_artist(l, "taylor swift", "love story");

  printf("===Looking for Playboi Carti's first song in the list===\n");
  print_node(find_artist(l, "playboi carti"));

  printf("===Looking for Adele's first song in the list===\n");
  print_node(find_artist(l, "adele"));

  printf("===Here's a random song===\n");
  print_node(find_random(l));

  printf("===Everbody wants some privacy... removing Zuckerberg===\n");
  remove_song(l, find_song_artist(l, "zuckerberg", "lol privacy"));
  print_list(l);

  printf("===Oh wait, I hate music...bye bye list===\n");
  l = free_list(l);
  print_list(l);
  printf("(there's nothing here)\n\n");


  printf("===MUSIC LIBRARY TESTS===\n");


  struct node * table[27];
 
  init_table(table);
  printf("===Inserting Music===\n");
  insert(table, "luis fonsi", "despacito");
  insert(table, "adele", "hello");
  insert(table, "adele", "rolling in the deep");
  insert(table, "zuckerberg", "lol privacy");
  insert(table, "playboi carti", "magnolia");
  insert(table, "famous dex", "japan");
  insert(table, "cardi b", "bodak yellow");
  insert(table, "dj dw", "c-master");
  insert(table, "playboi carti", "old money");
  print_all(table);

  printf("===Looking for: Bodak Yellow, Cardi B===\n");
  printf("found:\n");
  print_node(search(table, "cardi b", "bodak yellow"));

  printf("===Looking for playboi carti playlist===\n");
  print_artist(table, "playboi carti");

  printf("===Printing out entirety of this fire mixtape===\n");
  print_all(table);

  printf("===Printing out a shuffled playlist for ya===\n");
  shuffle(table);

  printf("===DJ dw not as fire as he used to be...===\n");
  printf("removing C-master, DJ Dw: \n");
  delete(table, "dj dw", "c-master");
  print_all(table);

  printf("===Spotify was better anyway, deleting this playlist===\n");
  clear(table);
  print_all(table);
  printf("(there's nothing here)\n\n");
  
  return 0;
}

