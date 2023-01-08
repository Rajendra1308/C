#include<stdio.h>
int main(){

int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		for(int j=0;j<num-i;j++){
			printf(" ");
		}//inner for
		int lim=2*i+1;
		for(int k=0;k<lim;k++){
			printf("*");
		}// inner for
		printf("\n");
		}//outer for
















}//main
