#include <stdio.h>
int main(){
  unsigned int num = 45;
  char * p_num = &num;

  //Number 2
  printf("%x\n", num);
  for(int i=0; i<4; i++){
    printf("%hhx", * p_num);
    p_num++;
  }


  //Number4
  printf("\n");
  p_num = & num;
  for(int i=0; i<4; i++){
    *p_num = num+1;
    printf("%hhx", * p_num);
    p_num++;
  }

  //Number 5
  printf("\n");
  p_num = & num;
  for(int i=0; i<4; i++){
    *p_num = num+16;
    printf("%hhx", * p_num);
    p_num++;
  }
  
  return 0;
}
