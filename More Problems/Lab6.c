#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee {
int Employee_ID;
char name [20]; // Employee name first name then last name
char address[50]; //The employee address might contains spaces
//Both name and address are terminated by
//a null character
int job_code; // An integer between 1 and 12
float salary;
}; //struct
int main(int argc, char * argv[]){
		struct employee e={123456, "John Smith", "70 main St. Toronto, ON M3M 3M3", 9, 73123.45};
		struct employee e1={7891011, "Jane Parker", "71 Duff St. Hamilton, ON N3P 4J2", 10, 70000.12};

		FILE * ptr;
		ptr=fopen("fileForLab6.txt","wb");
		fwrite(&e,sizeof(struct employee),1,ptr);
		fwrite(&e1,sizeof(struct employee),1,ptr);
		fclose(ptr);
		//printf("File Written\n");
		ptr=fopen("fileForLab6.txt","rb");
		struct employee ea[100]; //array of structs
		int read=0;// for populating structs
		// -ID

		if(strcmp(argv[1],"-ID")==0){
			int count=0;

				while(fread(&ea[read],sizeof(struct employee),1,ptr)==1){

					if(atoi(argv[2])==ea[read].Employee_ID){
						printf("%s\n",ea[read].name);
						count++;
					
					}//if
					read++;
				}//while
			if(count==0){
				printf("No Such ID\n");
			}//inner if
		}//outer if -ID

			//-s
		if(strcmp("-s",argv[1])==0){
		
				while(fread(&ea[read],sizeof(struct employee),1,ptr)==1){

					if(ea[read].salary>=atoi(argv[2])){
						printf("%s, %f\n",ea[read].name,ea[read].salary);

					
					}//if
					read++;
				}//while

	

}//if -s
				//-count
			if(strcmp(argv[1],"-count")==0){
				int count=0;
				while(fread(&ea[read],sizeof(struct employee),1,ptr)==1){

					count++;
					read++;
				}//while

			printf("%d\n",count);
		}//if -count

		//-name
		if(strcmp("-name",argv[1])==0){
			int count=0;
			while(fread(&ea[read],sizeof(struct employee),1,ptr)==1){
					if(strcmp(ea[read].name,argv[2])==0){
						printf("%f\n",ea[read].salary);
						count++;
					}//inner if

					read++;
				}//while
			
				if(count==0){
				printf("No such ID \n");
				}//inner if

			}//if -name
					
		


















}//main
