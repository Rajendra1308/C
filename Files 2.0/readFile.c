#include<stdio.h>
int main(){
	FILE * ptr;
	ptr=fopen("sample.txt","r");	
	char arr[100];
	fgets(arr,100,ptr);
	printf("%s",arr);

}
