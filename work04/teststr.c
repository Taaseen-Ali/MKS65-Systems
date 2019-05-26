int main(){
  char str1[] = "hello";
  char str2[] = "hello world";

  printf("%d", strcmp(str1, str2));
  printf("%d", strncmp(str1, str2,5));
  
  return 0;
} 
