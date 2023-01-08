#include<stdio.h>
int main(){

	char str[50];	
			//input array
		for(int i=0;i<50;i++){
			scanf("%c",&str[i]);
			if(str[i]=='\n'){
				str[i]='\0';
				break;
				}//if
			}//for
			
				


			for(int i=0;i<50;i++){
				if(str[i]=='\0'){
					break;
					}//if
				
				if(str[i]=='\t'||str[i]==' '){
					continue;
					}//if


				printf("%c",str[i]);
			}//for
printf("\n");








































}//main
