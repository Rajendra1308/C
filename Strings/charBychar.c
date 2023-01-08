#include<stdio.h>
#include<string.h>
int main(){

			char str[50];
			for(int i=0;i<50;i++){

				scanf("%c",&str[i]);
				if(str[i]=='\n'){
				break;
				}//if
			}//for
				
				for(int i=0;i<=strlen(str);i++){
					if(str[i]=='\n'){
					str[i]='\0';
						printf("Null char placed at %d \n",i);
					}//if
				}//for

			
				if(str[strlen(str)]=='\n'){
				printf("Newline Char found!\n");
				}//if
				if(str[strlen(str)]=='\0'){
				printf("Null Char found!\n");
				}//if
			
printf("Done \n");





























}//main
