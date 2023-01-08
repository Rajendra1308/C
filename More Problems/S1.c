#include<stdio.h>
#include<string.h>
	int main(){
		char str[100];
		fgets(str,100,stdin);
			
// for giving null char at 	
		for(int i=0;i<strlen(str);i++){
			if(str[i]=='\n'){
				str[i]='\0';
			//printf("Newline Char fount at %d \n",i);
			}//if


		}//for	

		char str1[100];
		int count=0;
		for(int i=0;i<strlen(str);i++){
			if(str[i]==' '){
				continue;
			}//if
				str1[count]=str[i];
				count++;	
		}//for
		str1[count]='\0';
		int index=0;
		printf("%d \n",strlen(str1));	
		for(int i=0;i<strlen(str1);i++){
			if(str1[i+1]-str[i]==1){
				index++;
				}//if
			}//for
		printf("%d \n",index);
				
	





}//main
