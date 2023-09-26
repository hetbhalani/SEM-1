//4B(2) find simple interest.

#include<stdio.h>

void main(){
	int p,r,t;
	float i;
	printf("enter principal : ");
	scanf("%d",&p);
	printf("enter roi : ");
	scanf("%d",&r);
	printf("enter time period : ");
	scanf("%d",&t);
	i=(p*r*t)/100;
	printf("%f", i);
	}
