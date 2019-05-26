#include <math.h>
#include <stdio.h>
#include <stdlib.h>
  
int sieve(int n){
  int max = n * log(n) *1.15;
  int *numbers = calloc(max,sizeof(int));
  numbers[0] = 0;
  numbers[1] = 0;
  int nthprime=0;
  for(int i=2; i<max; i++){
     if(!numbers[i]){
      for(int k=2*i; k<max; k+=i)
	numbers[k]=1;
      nthprime++;
    }
    if(nthprime==n)
      return i;
  }
  return 0;
}
    
