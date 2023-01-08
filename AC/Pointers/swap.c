#include<stdio.h>
void swap(int * p1, int * p2, int x);
int main(){
int a=5;
int b=4;
int c;
int *ptr1=&a;
int *ptr2=&b;
swap(ptr1,ptr2,c);
printf("a is %d \n",*ptr1);
printf("b is %d \n",*ptr2);

}

void swap(int * p1, int * p2, int x){
	x=*p1;
	*p1=*p2;
	*p2=x;
return;
}
