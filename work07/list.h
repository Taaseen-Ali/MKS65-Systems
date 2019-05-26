struct node {
  int i;
  struct list_node * next;
};

void print_list(struct node* n);
struct node* free_list(struct node* n);
struct node* insert_front(struct node* start, int i);
