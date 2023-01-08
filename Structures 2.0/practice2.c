#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct vector{
	int x;
	int y;
};//structure
struct vector sum(struct vector v,struct vector v1);
int main(){
	struct vector v1;
v1.x=34;
v1.y=54;
struct vector v2;
v2.x=34;
v2.y=54;
	printf("%d \n",v1.x);
	printf("%d \n",sum(v1,v2).x);
	printf("%d \n",sum(v1,v2).y);// the function returns a structure thus we use the dot operator with the function name.
}//main

struct vector sum(struct vector v,struct vector v1){ // the return type of function is struct vector
struct vector result;
result.x=v.x+v1.x;
result.y=v.y+v1.y;
return result;
}//function
