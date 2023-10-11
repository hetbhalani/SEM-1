//10(A)4 Calculate 𝑥𝑦 without using power function. 

#include<stdio.h>

void main(){
    int i,n,mul=1,x,y;
    printf("enter value of x and y : ");
    scanf("%d %d", &x,&y);

    for(i=0;i<y;i++){
        mul=mul*x;
    }
    printf("%d", mul);

}