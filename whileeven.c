// 8A(3)Print numbers between two given numbers which is divisible by 2.

#include<stdio.h>
void main(){

    int a,b,i=1;
    printf("enter two numbers : ");
    scanf("%d %d", &a,&b);

    while(i>=a && i<=b){
        if(i%2==0){
            printf("%d\n", i);
        }
        i++;
    }
}