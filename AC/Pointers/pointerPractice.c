#include <stdio.h>
int main(){
int x=5;
int * ptr;
printf(" The value of before x is %d \n",x);
ptr=&x; // ptr has address of x
*ptr=0; // value of x is 0 because when we say *ptr it translates to value at pointer is 0 , remember
// nothing happens inside ptr in memory whatever instructions given to ptr will reflect to the variables whose address is stored in it.
// therefore *ptr=0 means that value at address stored in ptr is 0 ptr  has x's address thus x=0;

printf(" The value of after x is %d \n",x);
// changing the value of variable using pointer
*ptr=*ptr+5; // x=x+5;
printf(" The value of after change x is %d \n",x);
// increment 
(*ptr)++; //*ptr=*ptr+5; --> x=x+5;
printf(" The value of x is %d \n",x);

}

