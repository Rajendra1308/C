#include<stdio.h>
int main() {
for(char i='a'; i<='z';i++){
char * ptr=&i;
printf("%c \n",*ptr);
}
}
