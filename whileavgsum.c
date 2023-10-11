//10(A)2 Find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>

void main(){
    int i=0,n,num,sum=0,avg=0;
    printf("enteer how many numbers you want to enter : ");
    scanf("%d", &num);

    while(i<=num){
        printf("enter numbers : ");
        scanf("%d", &n);
        sum=sum+n;
        avg=sum/num;
        i++;
    }
    printf(" sum is : %d\n avg is : %d", sum,avg);

}