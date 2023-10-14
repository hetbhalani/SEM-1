//12(B)1 Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).

#include<stdio.h>

void main(){
    int i,j,sum=0,n;
    printf("enter a terms : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            sum=sum+1;
        }
    }
    printf("%d",sum);
}