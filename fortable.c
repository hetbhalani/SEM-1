//11(A)3 Print multiplication table of a given number.

#include<stdio.h>
    void main(){
        int i,n,mul=1;

        printf("enter a number : ");
        scanf("%d", &n);

        for(i=1;i<=10;i++){
            mul=n*i;
            printf("%d\n", mul);
        }
    }
