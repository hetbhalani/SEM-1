//10(B)1 Check whether the given number is perfect or not.

#include<stdio.h>

void main(){
    int i=1,n,sum=0;

    printf("enter a number : ");
    scanf("%d", &n);

    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==n){
        printf("number is perfect");
    }
    else{
        printf("number is not perfect");
    }
}