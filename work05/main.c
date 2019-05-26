#include <stdio.h>
#include <stdlib.h>
#include "mystrlib.h"
/* add function headers below */

int main(){

  char str1[] = "hello";
  char str2[] = "hey";
  char str3[] = "hello";
  char str4[50] = "One does not simply ";
  char str5[50] = "code in c";
  char str6[] = "abunchofstrings";
  char str7[] = "a lot ";

  printf("demo mystrlen****************************************\n");
  printf("length of str1: %d\n", mystrlen(str1));
  printf("length of str2: %d\n", mystrlen(str2));
  printf("end demo*********************************************\n\n");

  printf("demo mystrncpy****************************************\n");
  printf("Before copy\n");
  printf("str1: %s, str2: %s\n", str1, str2);
  mystrncpy(str1, str2,3);
  printf("After copy\n");
  printf("str1: %s, str2: %s\n", str1, str2);
  printf("end demo*********************************************\n\n");

  printf("demo mystrcat****************************************\n");
  printf("str4: %s, str5: %s\n", str4, str5);
  printf("Append str4 and str5, put the result in str4\n");
  printf("%s\n",mystrcat(str4,str5));
  printf("end demo*********************************************\n\n");

  printf("demo mystrcmp******************************************\n"); 
  printf("Compare %s and %s\n",str1,str2);
  printf("%d\n", mystrcmp(str1,str2));
  printf("Compare %s and %s\n",str1,str3);
  printf("%d\n", mystrcmp(str1,str3));
  printf("end demo*********************************************\n\n");

  printf("demo mystrchr****************************************\n");
  printf("The address of \'%c\' in \"%s\"\n",'y',str2);
  printf("%p\n",mystrchr(str1,'y'));
  printf("Deref that address the we get\n");
  printf("%c\n",*mystrchr(str1,'y'));
  printf("end demo*********************************************\n\n");


  /*Extra************************************************************/

  /* demo strstr */

  /* demo strcpy */
  printf("demo mystrcpy****************************************\n");
  printf("Before copy\n");
  printf("str6: %s, str7: %s\n", str6, str7);
  mystrcpy(str6, str7);
  printf("After copy\n");
  printf("str6: %s, str7: %s\n", str6, str7);
  printf("end demo*********************************************\n\n");

  /* demo strncat */

  return 0;

}
