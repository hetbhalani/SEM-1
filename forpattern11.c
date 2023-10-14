//13(B)c.

#include <stdio.h>

void main() {
    int k, i, j;

    for(i=0;i<=5;i++){
        for(k=0;k<=i;k++){
            printf(" ");
        }
        for(j=0;j<5-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
