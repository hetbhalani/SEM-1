//4A(4) average of three numbers.

#include<stdio.h>

void main(){
	int a,b,c;
	float d;
	
	printf("enter 3 numbers : ");
	scanf("%d%d%d", &a,&b,&c);
	
	d=(a+b+c)/3;
	printf("%f", d);
}
