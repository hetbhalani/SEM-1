// 8A(2)Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.

#include<stdio.h>

void main(){
int i,n;
i=1;
printf("enter a number : ");
scanf("%d", &n);

while(i<=n){
    if(i%2!=0){
        printf("%d\n", i);
        
    }
    i++;
}
}