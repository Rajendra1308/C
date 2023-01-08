#include<stdio.h>
int main(){
int arr[2][2];
int i=0;
	for (int j=0;j<2;j++){
	do {
	scanf("%d",&arr[j][i++]);
	}while (getchar()!='\n');
	i=0;

	} //for loop




int x=0;
 for (int i=0;i<2;i++){
	for (int j=0;j<2;j++){
		x=x+arr[i][j];
}
printf("row %d is %d \n",i,x);	
x=0;
}

printf("\n");

}
