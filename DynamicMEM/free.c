#include<stdlib.h>
#include<stdio.h>
int main(){
float * ptr;
ptr= (float *)malloc(5* sizeof(float));
for(int i=0;i<5;i++){
ptr[i]=0.2f+i ;
}
printf("Before Free \n");
for(int i=0;i<5;i++){
	printf("%f \n",ptr[i]);
}

free(ptr);
	// to check that the memory is actually freed
	printf("After Free\n");
	for(int i=0;i<5;i++){
	printf("%f \n",ptr[i]);
}

}//main

