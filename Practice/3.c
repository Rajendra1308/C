#include<stdio.h>
int main(){
int row;
int col;
scanf("%d %d" , &row,&col);
int arr[row][col];			//input the array
					for(int i=0;i<row;i++){
						for(int j=0;j<col;j++){
							scanf("%d",&arr[i][j]);			
								}//inner for
						}//outer for
			
					int count=0;
				
					for(int i=0;i<row;i++){
						for(int j=0;j<col-1;j++){
						if(arr[i][j]<=arr[i][j+1]){	
							count++;
						}//if
					}//inner for
					if(count==col-1){
						for(int k=0;k<col;k++){
						printf("%5d",arr[i][k]);
					}//  print for						
					}//if
					count=0;
					//printf("%d \n",count);
				}// outer for
				
					printf("\n");









































} //main
