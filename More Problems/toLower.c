#include<stdio.h>
#include<string.h>
int main(){
	char str[15];
	
	scanf("%s",str);	

	for(int i=0;i<strlen(str);i++){
		if(!(str[i]>='a'&& str[i]<='z')){
		//}//do nothing

		//else{
			str[i]=str[i]+32;
		}//to lower
	}//for
	

	printf("%s\n",str);
	















}//main
