#include<stdio.h>
int main(){
//check if scanf ends a new char 

		char str[100];
		//for(int j=0;j<100;j++){
		
		fgets(str,100,stdin);
//		}


		//display the string
	for(int j=0;j<100;j++){
		if(str[j]=='\0'){
			break;	
}
		if(str[j]=='\t'||str[j]==' '){
		continue;		
	}//if	
		printf("%c",str[j]);
		}
//printf("\n");











































}//main

