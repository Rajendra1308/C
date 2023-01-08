#include<stdlib.h>
#include<stdio.h>
int main(){
int * ptr;
	ptr=(int *)calloc(5,sizeof(int));
	//for checking that calloc initializes with 0
	for(int i=0;i<5;i++){
	printf("%d \n",ptr[i]);
	}//for

	ptr=realloc(ptr,8);

printf("++++++++\n");
for(int i=0;i<8;i++){
	printf("%d \n",ptr[i]);
	}//for
}//main
