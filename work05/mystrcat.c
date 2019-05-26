#include "mystrlib.h"
char *mystrcat(char *dest, char *source){
	int i = mystrlen(dest);
	while(*source){
		dest[i] = *source;
		i++;
		source++;
	}
	return dest;
}

