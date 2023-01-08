#include<stdio.h>
#include<string.h>
int main(){
char name[20];
fgets(name,20,stdin);
int count=0;
//char name2[]="raj";
//int count1=0;
int i=0;
for (int i=0;name[i]!='\n';i++){
count++;

}
printf("%d \n",count);
//while (name[i]!='\0'){
//count1++;
//i++;
//}
//printf("String length is : %d \n",count);
//printf("String length is : %d \n",strlen(name2));

}
