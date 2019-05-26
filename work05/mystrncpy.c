char * mystrncpy( char *dest, char *source, int n){
  int i;
  for(i=0; i<n; i++){
    dest[i] = source[i];
  }
  
  return dest;
}
   
