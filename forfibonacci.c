//11(B)1 Print the Fibonacci Series.

#include<stdio.h>

void main(){
    int i,n,first=0,second=1,next;
    
    printf("enter terms : ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        if(i<=1){
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;

        }
        printf("%d ",next);
    }

}