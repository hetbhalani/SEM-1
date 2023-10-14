//13(B)a.

#include<stdio.h>

void main(){
    int i,j,sum=0;

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            sum=sum+1;
        printf("%d ",sum);
        }
        printf("\n");
    }
}