#include<stdio.h>
#include<stdlib.h>
typedef struct complex{
	int real;
	int complex;
	}comp;//structure

void display(comp num);
	int main(){
	comp nums[5];
	for(int i=0;i<5;i++){
	scanf("%d",&nums[i].real);
	scanf("%d",&nums[i].complex);

}//for
		for(int i=0;i<5;i++){ // to print the array of structure always use for loop
	display(nums[i]);
}//for
		}//main

void display(comp num){ // always use the alias of the structure in functions

	
		printf("Real For Complex Number  %d  \n",num.real);

		printf("IM For Complex Number %d  \n",num.complex);

}//function
