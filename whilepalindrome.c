//10(B)3  Check whether the given number is palindrome or not.

#include<stdio.h>

void main(){
    int i,n,rev=0,a,ognum;

    printf("enter a number : ");
    scanf("%d", &n);
    ognum=n;

    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }

    if(rev==ognum){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
}