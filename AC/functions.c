# include<stdio.h>
int main(){
void printHello();
int add(int x ,int y);
printHello();
//int z=add(1,3);
printf("%d \n",add(1,3)   );

}
//function that prints Hello World
void printHello(){
printf("Hello World \n");

}
int add(int x ,int y){
return x+y;
}
