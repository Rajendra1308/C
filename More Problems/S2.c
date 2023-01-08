#include<stdio.h>
#include<string.h>
int main(){

  char Fname[20];
  char Lname[20];
  char ID[20];
  int Credits;
	scanf("%s",Fname);
	scanf("%s",Lname);
	scanf("%s",ID);
	scanf("%d",&Credits);
	FILE * ptr;
	ptr=fopen("student.txt","w");
	fprintf(ptr,"%s \n",Fname);
	fprintf(ptr,"%s \n",Lname);
	fprintf(ptr,"%s \n",ID);
	fprintf(ptr,"%d \n",Credits);
	char y='Y';
	char n='N';
	if(Credits>=15){
	fprintf(ptr,"%c",y);
	fprintf(ptr,"\n");
	}
	else{
		fprintf(ptr,"%c \n",n);
	         fprintf(ptr,"\n");
	}//else

		fclose(ptr);
	

















}//main
