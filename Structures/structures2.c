#include<stdio.h>
#include<string.h>


	struct student{
	int roll;
	float cgpa;
	char name [50];
};
void printInfo(struct student s1);
	int main(){

	// You can initialize the structures without using the dot operator. 
	struct student s1={13,9.9,"rajendra"};
	struct student s2={14,9.99,"ashish"};
	struct student s3={15,10,"abhishek"};
	printf("%s \n",s1.name);
	// pointer to structures.
	struct student *ptr;
	ptr=&s1;
		printf("Value of the name using a pointer is %s \n",(*ptr).name);

	//passing structurs to functions
	printInfo(s2);
		
 
}

void printInfo(struct student s1){

	printf("%d %lf %s \n",s1.roll,s1.cgpa,s1.name);
	return;

}
