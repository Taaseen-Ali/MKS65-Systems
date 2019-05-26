#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void size_print(int size){
	char fsize[50];	
	if(size > 1000000000){
		//fsize = char(size%1000000000);
		sprintf(fsize, "%dGB", size/1000000000); 
		//fsize[sizeof(*fsize)] = "GB";
	}
	else if(size > 1000000){
		sprintf(fsize, "%dMB", size/1000000);
	}
	else if(size > 1000){
		sprintf(fsize, "%dKB", size/1000);
	}
	else{
		sprintf(fsize, "%dB", size);
	}
	printf("%s\n",fsize);
}

void permission_print(int mode){
	int bin_mode = 0;
	int power = 1;
	int remainder = 0;
	
	while(power <= 100000000){
		remainder = mode % 2;
		bin_mode += remainder * power;
		mode = mode/2;
		power *= 10;
	}

	int i;
	char str[10];

	for(i = 8;i>=0;i--){
		if((i == 8 || i == 5) || i == 2){
			if(bin_mode%10){
				str[i] = 'x';
				bin_mode = bin_mode / 10;
			}
			else{
				str[i] = '-';
				bin_mode = bin_mode / 10;
			}	
		}
		if((i == 7 || i == 4) || i == 1){
			if(bin_mode%10){
				str[i] = 'w';
				bin_mode = bin_mode / 10;
			}
			else{
				str[i] = '-';
				bin_mode = bin_mode / 10;
			}	
		}
		if((i == 6 || i == 3) || i == 0){
			if(bin_mode %10){
				str[i] = 'r';
				bin_mode = bin_mode / 10;
			}
			else{
				bin_mode = bin_mode / 10;	
				str[i] = '-';
			}	
		}	
	}	
	str[9] = 0;
	printf("%s\n",str);
}

int main(){
	struct stat *meta_data;
	char *file = "existentialism_is_a_humanism.txt";
	meta_data = malloc(sizeof(struct stat));
	
	open(file,O_RDWR);
	stat(file,meta_data);

	int size = meta_data->st_size;
	int mode = meta_data->st_mode;
	long atime = meta_data->st_atime;

	printf("print file size, mode (permissions), time of last access respectively\n"); 
	printf("%d\n",size);
	printf("%d\n",mode);
	printf("%s\n",ctime(&atime));
	
	printf("printing \"size\" and \"mode\" in *S*T*Y*L*E* (respectively)\n");
	size_print(size);
	permission_print(mode);

	return 0;

}
