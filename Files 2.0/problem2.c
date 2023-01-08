#include<stdio.h>
int main(){
	printf("Enter a number whose table you want to get created ");
	int num;	
	scanf("%d",&num);
	FILE * ptr;
	ptr =fopen("table.txt","w");
	for(int i=1;i<=10;i++){
	fprintf(ptr,"%d x %d = %d \n" ,num,i,num*i);
	}//for
	fclose(ptr);
}//main
