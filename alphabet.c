#include<stdio.h>

void main(){
	char ch;
	printf("enter a charecter : ");
	scanf("%c", &ch);
	
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
		printf("character is alphabet");
	}
	
	else{
		printf("character is not a alphabet");
	}
}
