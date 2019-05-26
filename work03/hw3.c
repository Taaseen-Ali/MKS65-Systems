#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
  
  srand(time(NULL));
  
  int ar[10];
  int ar_two[10];


  //populating ar
  for(int i=0; i<9; i++){
    ar[i] = rand();
  }
  ar[9] = 0;

  //printing ar
  for(int i=0; i<10; i++)
    printf("ar[%d]: %d\n", i, ar[i]);
    
  int *num = &ar;
  int *num_two = &ar_two;
  num+=9;
    //transfering values from ar to ar_two
  for(int i=0; i<10; i++)
    *(num_two+i) = *(num-i);
    
  printf("\n======new array=======\n");

  //printing ar_two
  for(int i=0; i<10; i++)
    printf("ar_two[%d]: %d\n", i, ar_two[i]);

  return 0;
}
