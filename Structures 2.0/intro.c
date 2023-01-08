#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};//employee

   int main(){

	struct employee	e1;
		e1.code=12345;
		e1.salary=1300.45;
		//e1.name="Josh"; cannot be declared like that bc string is an array in C use strcpy
		strcpy(e1.name,"Josh");
	printf("%d \n",e1.code);



















}//main
