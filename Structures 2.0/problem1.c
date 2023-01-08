#include<stdio.h>
#include<string.h>
struct employee{
int code;
double salary;
char name[10];
};//employee
	int main(){
	struct employee e [3];
	
	for(int i=1;i<2;i++){
		
		scanf("%d",&e[i].code);
		scanf("%lf",&e[i].salary);
		scanf("%s",&e[i].name);
	}//for
	

	printf("%d %lf %s \n", e[1].code,e[1].salary,e[1].name);
		



















}//main
