#include<stdio.h>
#include<string.h>
int main(){
	int start;
	int end;
	char str[100];


	scanf("%s %d %d",str,&start,&end);
	for(int i=start;i<end;i++){    // end not included put i<=end for including end
		printf("%c",str[i]);
	}//for

	printf("\n");


















}//main
