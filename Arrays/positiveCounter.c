#include<stdio.h>
int main(){



		int row;
		int col;
		int count=0;
		scanf("%d %d ",&row,&col);
		int arr[row][col];
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}//inner for
		}//outer for
			//iterate through all the elements of the array
	
			for(int i=0;i<col;i++){
				for(int j=0;j<col;j++){
					
					if(arr[i][j]%2!=0){
						count++;
							}//if
				}//inner for
			}//outer for
		printf("%d \n",count);









































}//main
