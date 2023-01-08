#include<stdio.h>
#include<string.h>

typedef struct Animal{
	char name[20];
	int legs;
}a; // this is the alias name (do not write struct Animal when it is typedefed, saves time, fancy)
int main(){
	a animal1={"Chandu",12};
	printf("%s \n",animal1.name);
	// Creating array of Structures
	// strcpy(dest,source) 
	a array[3];
	for(int i=0;i<3;i++){
	strcpy(array[i].name,"chandu");
	array[i].legs=i;
	}//for


//print
	for(int i=0;i<3;i++){
	printf("%s ",array[i].name);
	printf("%d \n",array[i].legs);
	}//for































	
}//main
