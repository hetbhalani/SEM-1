//13(A)b.

#include<stdio.h>

void main(){
    int i,j,sum=0;

    for(i=0;i<5;i++){
        
        for(j=0;j<5-i;j++){
            sum=sum+1;
            printf("%d",sum);
        }
        sum=0;
    printf("\n");
    }
}