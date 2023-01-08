#include<stdio.h>
#include<string.h>
struct employee{
int code;
double salary;
char name[10];


};//employee


  int main() {
	struct employee e[3];
	// this is the array of structures
// always access them with array name and use the dot operator
	e[0].code=12345;
	e[0].salary=1233.45;
	strcpy(e[0].name,"Rajendra");
	
	e[1].code=123456;
	e[1].salary=12344.45;
	strcpy(e[1].name,"Ashish");
	printf("%s\n",e[1].name);
}//main
