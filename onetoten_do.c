#include<stdio.h>

void main(){
    int i,n;
    i=1;
    printf("enter a number :");
    scanf("%d\n", &n);

    do{
        printf("%d", i++);
    }
    while(i<=n);
}