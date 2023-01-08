#include<stdio.h>
int main(){


	int length; //16 	
	int width; //23
	int height; //4
	int temp;
	scanf("%d %d %d",&length,&width,&height);
	temp=width;
		
		for(int i=0;i<length-height;i++){
			for(int j=0;j<width/2;j++){
				printf(".");
				}// inner for
				for(int m=0;m<2*i+1;m++){
				printf("*");
				}//for m
			for(int k=0;k<width/2;k++){
				printf(".");
				}// inner for
			width-=2;
			printf("\n");
			}// outer for.

			int limit=(temp-3);
			//printf("%d \n",limit);
		for(int p=0;p<height;p++){
			for(int l=0;l<limit/2;l++){
				printf(".");
				}// inner for
			for(int a=0;a<3;a++){
				printf("*");
				}// inner for
			for(int v=0;v<limit/2;v++){
				printf(".");
				}// inner for
		printf("\n");
		}// for outer.





}//main
