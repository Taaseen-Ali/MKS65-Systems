#include <stdio.h>
//Systems Homework 1

//Problem 1- Find the sum of all the multiples of 3 or 5 below 1000.
int multiples_of_three_and_five(){
  int sum=0;
  for(int i=0; i<1000; i++)
    if(i%5==0 || i%3==0)
      sum+=i;
  return sum;
}

//Problem 6 - Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int square_difference(int num){
  int sum=0;
  int square_sum=0;
  for(int i=1; i<=num; i++){
    sum+=i;
    square_sum += i*i;
  }
    
  return sum*sum - square_sum;
}

int main(){
  printf("sum: %d\n", multiples_of_three_and_five());
  printf("square diff: %d\n", square_difference(10));
}
