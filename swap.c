//5A(2) Swap two numbers. (Using temporary variable and without using temporary variable)

#include<stdio.h>

void main(){
    int a,b,temp;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    
    printf("%d %d",a,b);
}
