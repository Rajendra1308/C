#include<stdio.h>
int main(){
int arr [4][4];
for (int i=0;i<4;i++){
for (int j=0;j<4;j++){
arr[i][j]=j;
}
}

for (int i=0;i<4;i++){
for (int j=0;j<4;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
int * ptr= arr[0];
printf("%d \n",*(ptr+3));


}
