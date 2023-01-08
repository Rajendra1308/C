#include<stdio.h>
#include<string.h>
struct employee{
int code;
double salary;
char name[10];


};//employee
 	
	int main(){

// this is another way to initialize  structures

struct employee e1={12345,123.445,"Rajendra"};
struct employee e2={0}; // this sets all the datatypes of structure to 0 , if the structure has string then it is left blank
printf(" %d \n",e2.code);











}//main
