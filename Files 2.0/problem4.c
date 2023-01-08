#include<stdio.h>
int main(){
	FILE * ptr;
//	FILE * ptr2;
		//take input from user 
	ptr=fopen("records.txt","w");
	char arr[10];
	int salary;
	for (int i=0;i<2;i++){
	printf("Enter the details for Employee %d ",i+1);
	scanf("%s %d",arr,&salary);
	fprintf(ptr,"%s %d \n", arr,salary);
	}//for
	







}//main
