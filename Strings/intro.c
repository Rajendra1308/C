#include<stdio.h>
int main(){
char arr[]={'R','A','J','E','N','D','R','A','\0'};
// Another way to initialize a string
char name[]="Rajendra"; // does not need null termination as compiler understands it as String.
char srname[]="Rachna";
	for(int i=0; ; i++){
	if(name[i]=='\0'){
	break;}
	printf("%c",name[i]);
	}
	printf(" ");
	for(int i=0; ; i++){
	if(srname[i]=='\0'){
	break;}
	printf("%c",srname[i]);
	}
	printf("\n");








}
