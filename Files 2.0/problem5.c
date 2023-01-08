#include<stdio.h>
int main(){
	FILE * ptr;
	ptr=fopen("modify.txt","r");
	int arr[5];
	int num;
	for (int i=0;i<5;i++){
	fscanf(ptr,"%d",&num);
	arr[i]=num;
	}//for
	fclose(ptr);
	ptr=fopen("modify.txt","w");
	for(int i=0;i<5;i++){
	fprintf(ptr,"%d \n",2*arr[i]);
	}//for
fclose(ptr);
	
	







}//main
