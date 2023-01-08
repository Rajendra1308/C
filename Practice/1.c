#include<stdio.h>
int main(){

		int a;
		int b;
		int c;
		scanf("%d %d %d" ,&a,&b,&c);
		int x=1 ; 
		//if(b==0){
			
			
		//}//if	
		//else{
			//for(int i=1;i<=b;i++){
			//	x=x*10;
			//}//for		
		//}//else
				
		int y=1;
	for(int i=0;i<b;i++){
		a=a/10;
	}  //for
	//a=a/y;
//	int x=1;
	if(b==0){	
		for(int i=0;i<=c;i++){
		x*=10;
	}//for
	}//if
	else{
	for(int i=0;i<c;i++){
		x*=10;
	}//for
	}//else
	a=a%x;

printf("%d \n",a);
		







































}//main
