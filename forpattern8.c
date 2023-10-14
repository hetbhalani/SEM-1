//13(A)d.

#include<stdio.h>

void main() {
    int k, i, j, sum=0;

    for(i=0;i<=5;i++){
        for(k=0;k<=5-i;k++){
            printf(" ");
        }
       
        for(j=1;j<i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
