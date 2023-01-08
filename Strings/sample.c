#include<stdio.h>
#include<string.h>
int main(){
	
  	char arr[100];
	//	scanf("%s",&arr);
	fgets(arr,100,stdin);	
	for(int i=0;i<=strlen(arr);i++){
		if(arr[i]=='\0'){
			printf("Null character found! at %d \n" ,i);
			
		
		}//if
			
				if(arr[i]=='\n'){
			printf("Newline character found! at %d \n",i);
			//break;
		
		}//if
		}//for

	printf("%d \n",strlen(arr));
			
	


















































}//main
