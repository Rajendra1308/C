#include<stdio.h>
int main(){

int row;
int col;
scanf("%d %d", &row,&col);
int arr[row][col];
				//read input
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					scanf("%d",&arr[i][j]);
					}//inner for
			}//outer for

		int sum=0;
		int sum1=0;
		int index;
			for(int i=0;i<row;i++){	
				for(int j=0;j<col;j++ ){
				sum=sum+arr[i][j];
				}//inner for
			if(sum>=sum1){
			sum1=sum;
			index=i;
			}
			sum=0;
			}//outer for
		
	//print the row with max sum
	for(int i=0;i<col;i++){
		printf("%d ",arr[index][i]);
		}//for
		printf("\n");











































}//main

