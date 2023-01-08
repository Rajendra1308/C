#include<stdio.h>
int main(){
	FILE * ptr;
	ptr=fopen("sample2.txt","r");
	int a;
	int b;
	int c;
	fscanf(ptr,"%d %d %d",&a,&b,&c);
		printf("%d %d %d \n",a,b,c);

}//main
