#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(int argc, char*argv[]){
	char*string=(char*)malloc(sizeof(char)*100);
	
	int i=0;

	for (i=1; i<argc; ++i){
		strcat(string, argv[i]);
		strcat(string, " ");
	}
	int k=0;
	i=0;
	char*str=(char*)malloc(sizeof(char)*100);
	while(string[i]!='\0'){
		if (string[i+1]==' '){
			str[k]=string[i];
			k++;
		}
		++i;
	}
	printf("%s\n", str);
	
	return 0;
}
