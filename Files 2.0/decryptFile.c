#include<stdio.h>
#include<stdlib.h>
int main(){
 		FILE * ptr;
		ptr=fopen("encryptedFile","r");
		if(ptr==NULL){
			printf("File Not Found");
			exit(1);
		}//if
		
	

		FILE * ptr2;
		ptr2=fopen("decryptedFile.txt","w");
		char c;
		char key='A';
		while((c=fgetc(ptr))!=EOF){
		fprintf(ptr2,"%c",c^key);
		}// while
		printf("Decryption Successful \n");

























}//main
