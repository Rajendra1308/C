#include<stdio.h>
int main(){
	FILE * ptr;
	FILE * ptr1;
	ptr1=fopen("sample1.txt","r");
	//the r mode will not read from the files that are not present instead the fopen function will throw NULL value.
 
	ptr=fopen("sample2.txt","r");// file is opened in read mode
	if(ptr== NULL){
	printf("File not found \n");
}//if
		// the w mode will create a file if not present and enables us to write in it.
	ptr=fopen("sample2.txt","w");	
if(ptr== NULL){
	printf("File not found \n");
}//if
else{
printf("File created and opened \n");
}//else


}//main

