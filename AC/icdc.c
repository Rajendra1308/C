#include<stdio.h>
int main(){
int i=2;
int j=++i; // this gives value of i=i+1 to j and also updates i
//int j=i++; this gives the value of i i.e 2 to j and later updates i. Meaning j gets the old value of i.

printf("%d \n",j);
printf("%d \n",i);


}
