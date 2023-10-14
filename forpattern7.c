//13(A)c.

#include<stdio.h>

void main() {
    int k, i, j;

    for(i=0;i<=5;i++){
        for(k=0;k<=5-i;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
