struct node { char song[100]; char artist[100]; struct node *next; };

struct node * insert_front(struct node *list, char _song[100], char _artist[100]);

struct node * insert_order(struct node *list, char _song[100], char _artist[100]);

struct node * free_list(struct node *list);

struct node * find_song_artist(struct node *list, char _artist[100], char song[100]);

struct node * find_artist(struct node *list, char _artist[100]);

struct node * find_random(struct node *list); 

struct node * remove_song(struct node* list, struct node* rem); 

void print_list(struct node *list);

