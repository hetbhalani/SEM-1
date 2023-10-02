//4B(3) Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)

#include<stdio.h>

void main(){
	float c,h;
	printf("enter temperature in fahrenheit : ");
	scanf("%f", &h);
	c=(((h-32)*5)/9);
	printf("%f", c);
	
}
