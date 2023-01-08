#include<stdio.h>
int main(){
	char c;
	FILE * ptr;
	FILE * ptr2;
	ptr=fopen("sample.txt","r");
	ptr2=fopen("encryptedFile","w");
	char key='A';

	while((c=fgetc(ptr))!=EOF){
		fprintf(ptr2,"%c",key^c);
	}//while


		fclose(ptr);
		fclose(ptr2);















}//main
