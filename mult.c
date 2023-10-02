//5B(3) Multiply and divide a number by 2 without using multiplication/division operator.

#include<stdio.h>

void main(){
	int a,d,m;
	printf("enter a number : ");
	scanf("%d", &a);
	m=a<<1;
	d=a>>1;
	printf("mult=%d div=%d",m,d);

	
}
