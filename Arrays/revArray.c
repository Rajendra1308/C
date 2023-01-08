#include<stdio.h>
int main(){


		int col;
		scanf("%d",&col);
		int arr[col];
		for(int i=0;i<col;i++){
			scanf("%d",&arr[i]);
		}//for
		for(int i=0;i<col/2;i++){
		int temp;
		temp=arr[i];
		arr[i]=arr[col-i-1];
		arr[col-i-1]=temp;
		}//end
	printf("done \n");	
			//print the elements of array

			for(int i=0;i<col;i++){
			printf("%d ",arr[i]);
		}//for

	printf("\n");
	printf("done \n");	



























}//main
