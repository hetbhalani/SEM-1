//9A(3) Calculate 𝑥𝑦 without using power function.

#include<stdio.h>

void main(){
    int x,y,i=1,mul=1;
    printf("enter x and y : ");
    scanf("%d %d", &x,&y);

    while(i<=y){
        mul = mul * x;
        
        i++;
    }
    printf("%d\n", mul);
}