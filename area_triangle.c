//4B(1) area of triangle.

#include<stdio.h>

void main(){
	int h,b;
	float a;
	printf("enter height : ");
	scanf("%d", &h);
	printf("enter base : ");
	scanf("%d", &b);
	a=((h*b)/2);
	printf("%f", a);
}
