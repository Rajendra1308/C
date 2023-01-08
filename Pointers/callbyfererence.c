#include<stdio.h>
int  sum(int * ptr,int*ptr2);
void swap(int * ptr,int* ptr1);
int main(){
int age=19;
int age1=20;
int * ptr=&age;
int * ptr2= &age1;
printf("%d \n",sum(ptr,ptr2));
printf("%d %d \n",*ptr,*ptr2);
int c=10;
int d=12;
swap(&c,&d);
printf(" c is %d \n",c);
printf(" d is %d \n",d);

}
void swap(int * ptr,int* ptr1){
int temp;
temp=*ptr;
*ptr=*ptr1;
*ptr1=temp;
return;
}
int  sum(int * ptr,int*ptr2){
int c=*ptr+*ptr2;
*ptr=12;
*ptr2=24;
return c;

}

