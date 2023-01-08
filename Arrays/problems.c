#include<stdio.h>
int count(int arr[] , int n);
int main(){
int arr[]={1,2,3,4,5};
int x = count(arr,5);
printf("%d \n",x);
}
int count(int arr[] , int n){
int count=0;
for(int i =0;i<n;i++){
if (arr[i]%2!=0){
count++;
}
}
return count;
}
