#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter 3 nummbers : ");
	scanf("%d %d %d", &a,&b,&c);
	
	(a>b)?printf("%d", a*c):printf("%d", b*c);
}
