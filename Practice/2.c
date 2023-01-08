#include<stdio.h>
#include<string.h>
int main(){
char str[50];
scanf("%s",str);
int count=0;
int count1=0;

		for(int i=0;i<=strlen(str)-2;i++){
			if(str[i+1]-str[i]==1 && str[i]>=97 &&str[i]<122){
				count++;
				}//if
			if(str[i+1]-str[i]==1 && str[i]>=65 &&str[i]<90){
				count1++;
				}//if

		}//for
//printf("%d",count);
if(count==strlen(str)-1){
printf("Consecutive and all small letters  ");
}//if

else if(count1==strlen(str)-1){
printf("Consecutive and all capital letters ");
}//if
else{
printf("Not Consecutive");
}
printf("\n");









































}//main

