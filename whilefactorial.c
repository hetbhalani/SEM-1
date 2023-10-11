//9A(4) Find factorial of the given number.

#include<stdio.h>

void main(){
    int i=1,n,mul=1;
    printf("enter a number : ");
    scanf("%d", &n);

    while(i<=n){
        mul = mul * i;
        i++;
    }
    printf("%d", mul);
}