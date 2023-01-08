#include<stdio.h>
#include<stdlib.h>
int main(){
		
  FILE * ptr;
	ptr=fopen("records.txt","r");
	if(ptr==NULL){
	printf("File not found \n");
	exit(1);
	}// if
	else{
		char c;
		while((c=fgetc(ptr))!=EOF){    // do not compare the c with 1 as EOF is a character and will be used to detect end of file, notice how EOF has not brackets.
		printf("%c \n",c);
		}//while
	fclose(ptr);
	}// else



		

































}// main
