#include<stdio.h>
int main(){
int tables[10][2]; //10 rows 2 cols
for (int i=1;i<=10;i++){
for (int j=0;j<2;j++){
if(j==0){
tables[i-1][j]=2*i;
}
else{
tables[i-1][j]=3*i;
}
}}
for (int i=0;i<10;i++){
for (int j=0;j<2;j++){
printf("%d ",tables[i][j]);

}
printf("\n");
}
}
