#include<stdio.h>
int main(){
		int row;
		int col;
		scanf("%d %d",&row,&col);
		int arr [row][col];
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}//inner for
		}//outer for
			//reverse the elements
			for(int i=0;i<row;i++){
				for(int j=0;j<col/2;j++){
				int temp;
				temp=arr[i][j];
				arr[i][j]=arr[i][col-1-j];
				arr[i][col-1-j]=temp;
				}//inner for
			}//outer for
		
	//printing the elements
		

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
			}//inner for
			printf("\n");
		}//outer for





printf("\n");





























}//main
