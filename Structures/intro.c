#include<stdio.h>
#include<string.h>

struct student{
int roll;
float cgpa;
char name[100];
}; // do not forget to include ';'
int main(){
	struct student s1;
	s1.roll=1664;
	s1.cgpa=9.2;	
	strcpy(s1.name,"rajendra");
printf("%s \n",s1.name);

			struct student s2;

	s2.roll=1554;
	s2.cgpa=9.9;	
	strcpy(s2.name,"abhiskek");
	printf("%s \n",s2.name);
		struct student s3;

	s2.roll=1554;
	s2.cgpa=10;	
	strcpy(s2.name,"ashish");
	printf("%s \n",s2.name);
}
