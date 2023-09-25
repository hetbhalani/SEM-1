// 8A(1)Print 1 to 10 then modify program Print 1 to n using while and do while loop

#include<stdio.h>

void main(){
    int n,i;
    i=1;
    printf("enter a number : ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d\n", i++);
    }
}