#include<stdio.h>
int main(){
FILE * fptr;
	fptr=fopen("test.txt","r");
	int ch;
for(int i=0;i<5;i++){
	fscanf(fptr,"%d",&ch);
	printf("%d \n",ch);	
}//while
fclose(fptr);
}//main
