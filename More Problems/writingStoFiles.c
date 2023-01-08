#include<stdio.h>
#include<string.h>
typedef struct Animal{
	char name[20];
	int legs;
}a;// this is the alias


int main(){
	

// creating an array of structure
 a array[3];
	// initializing
	for(int i=0;i<3;i++){
	strcpy(array[i].name,"chandu");
	array[i].legs=i;
	}//for

		// doing the file work.
	FILE * ptr;
	ptr=fopen("structureToFile","w");
	for(int i=0;i<3;i++){
		fwrite(&array[i],sizeof(struct Animal),1,ptr);
	}//for
		printf("Structures Written!! \n");
	fclose(ptr);





















}//main

