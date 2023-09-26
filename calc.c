#include<stdio.h>

void main(){
	float a,b;
	int choice;
	
	printf("enter two numbers : ");
	scanf("%f %f", &a,&b);
	printf("1=+ 2=- 3=/ 4=*");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("addition = %f", a+b);
			break;
			
		case 2:
			printf("substraction = %f", a-b);
			break;
			
		case 3:
			printf("divition = %f", a/b);
			break;
			
		case 4:
			printf("multiplcation = %f", a*b);
			break;
			
		default:
				printf("enter a velid chioce");
				break;
	}
}
