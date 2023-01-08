#include<stdio.h>
#include<stdlib.h>
int main(){
	// read row and col
	int row;
	int col;
	scanf("%d",&row);
	scanf("%d",&col);
	int arr [row][col];
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
		scanf("%d",&arr[i][j]);
		}// inner for
	}// outer for

	// to check if the matrix is symmetric -> array is already in memory read it the way you want
		int count =0;
		for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
			if (arr[i][j]==arr[j][i]){
			count++;
				}// if-- // count will be equal to the number of elements in the matrix if it is symmetric
		}// inner for
	}// outer for.
		printf("%d \n",count);
	if(count==row*col){// count will be equal to the number of elements in the matrix if it is symmetric
             printf("Matrix is Symmetric \n");
	}


	else{
		printf("Matrix is non Symmetric \n");
		}
	

















}//main
