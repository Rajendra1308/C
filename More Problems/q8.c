#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	for(int i=0;i<=num;i++){
		for(int j=0;j<i;j++){
			if(i==0||j==i-1){
				printf("*");
			}//if
			else{
				printf(".");
			}//else
		}// inner for
		printf("\n");
	}//outer for.


}//main
