//10(A)3 Find whether the given number is prime or not.

#include<stdio.h>

void main(){
    int i=1,n,count=0;
    printf("enter a number : ");
    scanf("%d", &n);

    while(i<=n){
        if(n%i==0){
        count=count+1;
        }
        i++;
    }
    if(count==2){
        printf("numer is prime");
    }
    else{
        printf("number is not prime");
    
    }
}
