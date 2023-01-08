#include<stdio.h>
#include<string.h>
int main(){
		char str[50];
		for(int i=0;i<50;i++){
			scanf("%c",&str[i]);
			if(str[i]==' '){
				str[i]='\0';
				break;
			}//if
		}//for
		int start;
		int end;
	scanf("%d %d",&start,&end);
	
		for(int i=start;i<=end;i++){
			if(end==strlen(str)){
				printf("%c",str[start]);
				break;			
}
			printf("%c",str[i]);

		}//for
	printf("\n");
	
	
	
	
		
}//main

		
