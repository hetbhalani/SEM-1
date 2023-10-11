//11(B)2 Count frequency of digits in an integer.

#include<stdio.h>

void main(){
    int i,n,x,count=0,a;

    printf("enter a number : ");
    scanf("%d", &n);
    printf("frequency of : ");
    scanf("%d", &x);

    for(i=0;n!=0;i++){
        a=n%10;
        n=n/10;
        if(a==x){
            count=count+1;
        }
    }
    printf("frequency of your number is : %d", count);

}