#include<stdio.h>
int main(){
	FILE * fptr;
	fptr=fopen("test.txt","r");
	char str;
		while(!feof(fptr)){
		fscanf(fptr,"%c",&str);
		printf("%c",str);
}

	fclose(fptr);
	printf("file closed \n");
}
