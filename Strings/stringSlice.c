#include<stdio.h>
int main(){
			

		char str[50];
		//fgets(str,50,stdin);
		for(int i=0;i<50;i++){
				scanf("%c",&str[i]);
				if(str[i]==' '){
				str[i]='\0';
					break;
				}//if
		}//for
		int i1,i2;
	scanf("%d %d",&i1,&i2);
	for(int i=i1;i<i2;i++){
		printf("%c",str[i]);
		}//for

printf("\n");


			
		
		



}//main
