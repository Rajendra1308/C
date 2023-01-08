#include<stdio.h>
int main(){
	FILE * ptr;
	//open the file in write mode

	ptr=fopen("sample.txt","w");
	fprintf(ptr,"%s","This is a new Line ");
	fprintf(ptr,"This is a new Line \n ");
		fprintf(ptr,"%d",45);


}//main

