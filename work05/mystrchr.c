char *mystrchr(char* str, int c){
	int i;
	while(*str){
		if(*str == c){
			return str;
		}
		else{
			str++;
		}
	}
	return 0;
}










