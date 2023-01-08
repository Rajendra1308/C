#include<stdio.h>
#include<string.h>

typedef struct employee{ // this use to create an alias for the structure name, it becomes easy to declare.
int code;
double salary;
char name[10];


}emp;//employee


   int main(){
     emp e1;
  //  struct emp * ptr;
	//ptr=&e1; // this ptr of type employee and has e1's address
	e1.code=123445;
	e1.salary=1333.45;
	strcpy(e1.name,"Rajendra");
	printf("This Works!\n");

}//main
