#include<stdio.h>

int main(){
	int a,b,c;
	printf("enter 3 numbers : ");
	scanf("%d%d%d", &a,&b,&c);
	
	if (a > b && a > c){
		printf("a is largest \n");
	}
	else if(b > a && b > c){
		printf("b is largest \n");
	}
	else
		printf("c is largest \n");
		
	return 0;
}
