#include<stdio.h>
#include<string.h>
typedef struct Animal{
	char name[20];
	int legs;
}a;// this is the alias

int main(){
	
		// always store the structures in an Array
		a array[3];
	FILE * ptr;
	ptr=fopen("structureToFile","r");
	int count=0;

	while(fread(&array[count],sizeof(struct Animal),1,ptr)==1){	
		printf("%d \n",array[count].legs);
		count++;
		}//while












}//main
