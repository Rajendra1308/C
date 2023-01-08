#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
	scanf("%s",str);
	int count=0;
	for(int i=0;i<strlen(str)/2;i++){	
		if(str[i]==str[strlen(str)-1-i]){
			count++;
		}//if
	}//for

	if(count==strlen(str)/2){
		printf("Palindrome \n");
	}//if	

	else{
			printf("Not a Palindrome \n");	

}


}// main
