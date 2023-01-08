#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){


		char Fname[15];
		char last[15];
		char ID[6];
		int Credits;
		scanf("%s",Fname);
		//printf("%s",Fname);
		scanf("%s",last);
		//printf("%s",last);
		scanf("%s",ID);
		scanf("%d",&Credits);
		// last with spaces
		int y=strlen(last);
		for(int i=y;i<=15;i++){
			if(i==15){
			last[i]='\0';
			}//if
			else{
			last[i]=' ';
			}
		}//for
		printf("%d \n",strlen(last));
		int x=strlen(Fname);
		// Fname with spaces
		for(int i=x;i<=15;i++){
			if(i==15){
			Fname[i]='\0';
			}//if
			else{
			Fname[i]=' ';
			}
		}//for
		printf("%d \n",strlen(Fname));


		FILE * ptr;
		ptr=fopen("S3.txt","w");
	 

		//fprintf(ptr,"%s",Fname);
		fputs(Fname,ptr);

		//fprintf(ptr,"%s",last);
		fputs(last,ptr);
		
		
		fprintf(ptr,"%s%d",ID,Credits);
		if(Credits>=15){
			fprintf(ptr,"%c\n",'Y');
		}//if
		else{
		fprintf(ptr,"%c\n",'N');
		}//else
		











}//main
