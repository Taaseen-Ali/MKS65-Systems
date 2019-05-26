void init_table(struct node * table[27]);

void insert(struct node * table[27], char _artist[], char _song[]);

struct node * search(struct node* table[27], char _artist[100], char _song[100]);

struct node * search_artist(struct node* table[27], char _artist[100]);

void print_alpha(struct node* table[27], char letter);

void print_artist(struct node* table[27], char _artist[100]);

void print_all(struct node* table[27]);

void shuffle(struct node* table[27]);

void print_node(struct node* n);

struct node * delete(struct node* table[27], char _artist[100], char _song[100]);

void clear(struct node* table[27]);
