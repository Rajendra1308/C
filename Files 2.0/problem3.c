#include<stdio.h>
int main(){
	FILE * ptr1;
	FILE * ptr2;
	ptr1=fopen("sample.txt","r");
	ptr2=fopen("sample3.txt","w");
	char c= fgetc(ptr1);
	while(c!=EOF){
	fputc(c,ptr2);
	fputc(c,ptr2);
	c=fgetc(ptr1);
}//while
	
	







}//main
