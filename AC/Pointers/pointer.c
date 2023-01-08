# include<stdio.h>
int main(){
int age =22;
int * ptr=&age;
int age1=*ptr;
// the address of age is stored in ptr using &
printf(" The address of age is %p \n",ptr);
printf(" The address of age is %p \n",&age); // these 2 are same &age and ptr as ptr points to age.
printf(" The address of ptr is %p \n",&ptr);// this is the address of ptr, as it is also stored inside memory so must have an adress
printf(" The value  of age is %d \n",age1);
// printing the value at address using *
printf(" The value at address of ptr is %d \n",*ptr); // again these 2 are same
printf(" The value at address of age is %d \n",age);

}
