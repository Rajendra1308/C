#include<stdio.h>


int main(){

	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		if(i==0||i==num-1){
	   for(int j=0;j<num;j++){
		
			printf("*");

		
		}//for
	}//if
	else{
		for(int k=0;k<num;k++){
			if(k==0||k==num-1){
			printf("*");
			}//if

			else{
			printf(" ");
			}
		}//for
	}//else
	printf("\n");
	}//outer for
		



















}//main
