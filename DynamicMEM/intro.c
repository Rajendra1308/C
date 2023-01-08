#include<stdlib.h>
#include<stdio.h>
int main(){
int * ptr;
ptr= (int *) malloc(5*sizeof(int));
ptr[0]=12;
ptr[1]=16;
ptr[2]=15;
ptr[3]=13;
ptr[4]=14;


	//to print the values 
	for(int i=0;i<5;i++){
	printf("%d \n",ptr[i]);
	}//for
}//main
