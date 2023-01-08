#include<stdio.h>
int main(){

int age=18;
int * ptr=&age;
*ptr=*ptr+1;
printf("%d \n",*ptr);
printf("%d \n", age);
printf("pointer's address is %u \n",&ptr);

printf("age's address is %d \n",&age);


}
