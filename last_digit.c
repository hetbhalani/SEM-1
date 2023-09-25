#include<stdio.h>

void main(){
    int a;
    printf("enteer a number : ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("last digit of the number is even");
    }
    else{
        printf("last digit of the number is odd");
    }
}