//9A(2) Print multiplication table of a given number.

#include<stdio.h>

void main(){

    int i=1,n,mul=0;
    printf("enter a number : ");
    scanf("%d", &n);

    while(i<=10){
        mul = i*n;
        printf("%d\n", mul);
        i++;
    }

}