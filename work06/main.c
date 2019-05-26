#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct profile {char ini; char* name;};
struct profile studentA;
struct profile studentB;


char *rand_name(int seed){
    srand(seed);
    char *name_set[10];
    name_set[0] = "jimmy";
    name_set[1] = "cartman";
    name_set[2] = "kenny";
    name_set[3] = "timmy";
    name_set[4] = "tokken";
    name_set[5] = "clyde";
    name_set[6] = "james";
    name_set[7] = "ike";
    name_set[8] = "kyle";
    name_set[9] = "stan";
    return name_set[rand() % 10];
}

char rand_char(int seed){
    const char* char_set = "abcdefghijklmnopqrstuvwxyz";
    srand(seed);
    return char_set[rand() %25];
}

void struct_print(struct profile student){
        printf("student first initial: %c\n",student.ini);
        printf("student last name: %s\n",student.name);
}

int struct_set(char a, char* b, struct profile *student){
        student->ini = a;
        student->name = b;
	return 0;
}

struct profile struct_create(){	
	struct profile rand_struct;
	struct_set(rand_char(time(NULL)),rand_name(time(NULL)),&rand_struct);
	return rand_struct;
}

int main(){
printf("print manually generated struct*************************************\n\n");
//demo struct_set
struct_set('t',"liu",&studentA);

//demo struct_print
struct_print(studentA);

printf("print randomly filled struct*************************************\n\n");
struct_set(rand_char(time(NULL)+2),rand_name(time(NULL)+3),&studentB);
struct_print(studentB);

printf("print randomly generated struct**********************************\n\n");
struct_print(struct_create());
return 0;
}

