#include<stdio.h>
int main(){
		int row;
		int col;
		int count;
				scanf("%d %d",&row,&col);

		int arr[row][col];
		// input the array
			

				for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
								
					scanf("%d",&arr[i][j]);
				}//for(j)


			}//for(i)
		
		int sum=0;
		int sum1=0;
		int index=0;
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					sum=sum+arr[i][j];
				}//inner for

			if(sum>sum1){
				sum1=sum;
				index=i;
			}// if
			if(sum=sum1){
				index=i;
			}//if
			sum=0;					
}//outer for
		for(int i=0;i<col;i++){			
			printf("%d ",arr[index][i]);
		}//for
	printf("\n");

}//main

				
	
		
