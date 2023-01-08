#include<stdio.h>
#include<string.h>

struct employee{
int code;
double salary;
char name[10];


};//employee
void show(struct employee e);

   int main(){
    struct employee e1;
    struct employee * ptr;
	ptr=&e1; // this ptr of type employee and has e1's address
	e1.code=123445;
	e1.salary=1333.45;
	strcpy(e1.name,"Rajendra");
	show(e1);

}//main
void show(struct employee e){
	printf("The details of employee is \n");
	printf("Code is %d \n",e.code);
	printf("Salary is %lf \n",e.salary);
	printf("Name is %s \n",e.name);

}

