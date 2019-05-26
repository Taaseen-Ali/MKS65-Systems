#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(){
  printf("demo open:******************************************\n\n");
  int filedesc = open("testfile.txt", O_RDWR);
    
  printf("demo read:******************************************\n\n");
  char filechars[1000];  //determine how many bytes to put into buffer
  read(filedesc, filechars,1000);
  
  printf("******print buffer\n");
  int i=0;
  while(filechars[i]){
    printf("%c", filechars[i]);
    i++;
  }	
  printf("\n");
  
  printf("demo write/close:*****************************************\n\n");
  printf("******write return: %d\n",   write(filedesc, "spam\n", 5)); //the byte written by write must be declared precisely
  close(filedesc);
  
  return 0;
}



