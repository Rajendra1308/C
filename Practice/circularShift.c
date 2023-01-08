#include<stdio.h>
	int main(){
							

		int row;
		int col;
	scanf("%d %d",&row,&col);
int arr[row][col];
		//input array
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}//inner for
		}//outer for
		int x;
		int y;

		
		for(int i=0;i<row;i++){
			x=arr[i][0];
			y=arr[i][1];
			for(int j=1;j<col;j++){
			arr[i][j-1]=arr[i][j+1];
			}//inner for
			arr[i][col-2]=x;
			arr[i][col-1]=y;
		}//outer for


//input array
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
			}//inner for

			printf("\n");
		}//outer for



































}//main
