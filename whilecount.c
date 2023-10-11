//10(A)4 Print digits of given number.

#include<stdio.h>

void main(){
    int i,n,count=0;

    printf("enter a digit : ");
    scanf("%d", &n);

    while(0<n){
          n=n/10;
          count++;
        }
        printf("%d", count);

    }
