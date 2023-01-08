#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
char str1[50]="This";
//int 45;
int count=0;
	FILE * ptr;
	ptr=fopen("sample.txt","r");
	while(fscanf(ptr,"%s",str)==1){
		//printf("%d \n",count++);
		if(strcmp(str1,str)==0){
		printf("Match Found \n");
}
		//printf("%s",str);
		}//while

	fclose(ptr);























}//MAIN
