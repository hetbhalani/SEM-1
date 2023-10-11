//11(A)1 Print 1 to 10 then modify program print 1 to n.

#include<stdio.h>

void main(){
    int i,n;
    printf("enter a number : ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        printf("%d\n",i);
    }
}