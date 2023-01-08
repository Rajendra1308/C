#include<stdio.h>
int main(){
int a;
int b;
printf("Enter a number :");
scanf("%d",&a);
printf("Enter another number :");
scanf("%d",&b);
int * p1=&a;
int *p2=&b;
	if (*p1>*p2){
	printf("max is %d \n",*p1);
	}
	else{
	printf("max is %d \n",*p2);
	}
}
