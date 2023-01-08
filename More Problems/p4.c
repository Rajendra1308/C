#include<stdio.h>


int main(){
		

int num;
		scanf("%d",&num);	
		for(int i=0;i<=num;i++){
			for(int j=1;j<=i;j++){
				printf("%d",j);
			}//inner for
			printf("\n");
		}//outer for
		
	for(int k=1;k<num;k++){
		for(int m=1;m<=num-k;m++){
			printf("%d",m);
		}//inner for
		printf("\n");
	}//outer for






}//main
