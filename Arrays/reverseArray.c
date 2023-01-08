#include<stdio.h>
void swap(int arr [], int i, int size);
void reverse(int arr[] , int size);
int main(){
int arr[]={1,2,3,4,5};
reverse(arr,5);
for (int i=0;i<5;i++){
printf("%d ",arr[i]);
}
printf("\n");



}

void reverse(int arr[] , int size){
for(int i=0;i<size/2;i++){
swap ( arr,i,size);
}
return;
}
void swap(int arr [], int i, int size){
int t=0;
t=arr[i];
arr[i]=arr[size-i-1];
arr[size-i-1]=t;
return;
}

