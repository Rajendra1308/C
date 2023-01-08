#include<stdio.h>

int main(){
	FILE * ptr;
	ptr=fopen("sample2.txt","r"); // opening file in read mode.
	int num;
	//fscanf(ptr,"%d",&num);
	//printf("%d \n",num);
	//FILE * ptr2;
	//ptr2=fopen("newFile.txt","w");


	while(	fscanf(ptr,"%d",&num)==1){   // here the 1 returned is the indication of Successs fscaf returns a 0 if it read a char or string
	printf("%d \n",num);
        //fprintf(ptr2,"%d \n",num);
	//fscanf(ptr,"%d",&num);
	

}//while



}//main
