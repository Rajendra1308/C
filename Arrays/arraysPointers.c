#include<stdio.h>
int main(){
int arr[2][2]={{1,2},{3,4}};
int * ptr=arr[1];
			//print elements of array using pointers
		for (int i=0;i<2;i++){
			
			printf("%d ",*ptr+i);
		}

printf("\n");
			int x=0;
			// for sum of elements of array
			for(int i=0;i<2;i++){
			x=x+arr[1][i];

			
			}
printf(" x is : %d \n",x);	
printf("%d \n",arr[1][0]);
printf("%d \n",arr[1][1]);


}
