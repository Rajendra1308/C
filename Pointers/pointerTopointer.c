#include<stdio.h>
int main(){

int age =19;
int * ptr=&age;
int ** ptr2=&ptr;
**ptr2=**ptr2+1;
printf("%d \n",age);


}
