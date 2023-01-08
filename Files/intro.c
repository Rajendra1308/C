#include<stdio.h>
int main(){
 FILE * fptr;
fptr=fopen("Test.txt","r"); // r is for the read
if(fptr==NULL){
	printf("File does not exist \n");
	}//if
else{
fclose(fptr);
}//else 
}
