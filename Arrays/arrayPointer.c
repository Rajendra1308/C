#include<stdio.h>
int main(){
int myArr [] ={1,2,3,4,5};
int *ptr= &myArr[0];
for (int i=0;i<5;i++){
printf("%d \n",*ptr);
ptr++;
}
}
