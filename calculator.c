//6A(1) Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include<stdio.h>

void main(){
	
	int a,b,add,sub,mul,choice;
	float div;
	
	printf("enter two numbers : ");
	scanf("%d %d", &a,&b);
	
	printf("1=addition 2=subtraction 3=multiplication 4=divition");
	printf("enter your choice");
	scanf("%d", &choice);
	
	if(choice==1){
		add=a+b;
		printf("%d",add);
	}
	else if(choice==2){
		sub=a-b;
		printf("%d",sub);
	}
	else if(choice==3){
		mul=a*b;
		printf("%d",mul);
	}
	else if(choice==4){
		div=a/b;
		printf("%f",div);
	}
	else{
		printf("enter velid choice");
	}
}

