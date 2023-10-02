//6A(4) Input an integer number and check the last digit of number is even or odd.

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
