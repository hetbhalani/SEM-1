//10(A)5 Print given number in reverse order.

#include<stdio.h>

void main(){
    int i=0,n,a=0,rev=0;

    printf("enter a number : ");
    scanf("%d", &n);

    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("%d", rev);
}