#include<stdio.h>
#include<string.h>
struct vector{
int x;
int y;


};
struct complex{
int real;
int imaginary;


};
void sumvectors(struct vector x, struct vector y,struct vector * sum ){
(*sum).x=x.x+y.x;
(*sum).y=x.y+y.y;
//printf(" sum is %d %d \n", sum.x,sum.y);

}// sum
void sumvectors(struct vector x, struct vector y,struct vector * sum );
int main(){
	struct vector v1={5,10};
	struct vector v2={15,20};
	struct vector sum={0};
	struct vector * ptr;
	ptr=&sum;
	sumvectors(v1,v2,ptr);
	// here we pass a pointer to the function only because we want the memory to get updated, bc C passes a copy of value and thus we get the memory of the sum filled by using pointers.
	printf(" sum.x is %d \n",sum.x);
	printf(" sum.y is %d \n",sum.y);
	struct complex c1={5,10};
	printf("%d \n",c1.real);
	
}//main
