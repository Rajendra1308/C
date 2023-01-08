#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	

	char str[100];
	char new[100];
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		new[i]=tolower(str[i]);
		}// for
		int count=0;
	for(int i=0;i<strlen(str)-2;i++){
		if(new[i+1]-new[i]==1 && new[i+2]-new[i+1]==1){
		count++;
			}//if
		}// for	

		if(count>0){
		printf("YES \n");
		}//if







}//main
