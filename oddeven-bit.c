//5B(2) Check whether the given number is odd or even using bitwise operator.

#include<stdio.h>

void main(){
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if(a & 1){
        printf("%d is odd", a);
    }
    else{
        printf("%d is even", a);
    }
}
