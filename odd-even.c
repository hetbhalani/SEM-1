//5A(4) Check whether the given number is odd or even.

#include<stdio.h>

void main(){
     int a;
    printf("enter a number : ");
    scanf("%d", &a);
     if(a%2==0){
        printf("number is even");
     }
     else {
        printf("number is odd");
     }
}
