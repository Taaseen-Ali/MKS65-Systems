#include "mystrlib.h"

int mystrcmp(char *str1, char *str2){
	if(mystrlen(str1) > mystrlen(str2) || mystrlen(str1) < mystrlen(str2)){
		return str1 - str2;
	}
	int i = 0;
	for(i; i<mystrlen(str1);i++){
		if(*str1 < *str2 || *str1 > *str2){
			return str1 - str2;
		}
		else{
			str1++;
			str2++;
		}
	}
	return 0;
}
