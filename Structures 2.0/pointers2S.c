#include<stdio.h>
#include<string.h>

struct employee{
int code;
double salary;
char name[10];


};//employee


   int main(){
    struct employee e1;
    struct employee * ptr;
	ptr=&e1; // this ptr of type employee and has e1's address
	e1.code=123445;
	e1.salary=1333.45;
	strcpy(e1.name,"Rajendra");
	printf("%s\n",(*ptr).name);
	












}//main
