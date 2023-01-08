#include<stdio.h>
#include<stdlib.h>
int main(){
	int row;
	int col;
	scanf("%d",&row);
	scanf("%d",&col);
	int arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		scanf("%d",&arr[i][j]);
		}//inner for
	}// outer for
		
	
	// to display the transpose we just display col and row instead of row and col(in the sequences of for loop)
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
		printf("%d ",arr[j][i]);
		}// inner for
		printf("\n");
		}// outer for

	
	



















}// main


