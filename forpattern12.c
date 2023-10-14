//13(B)d.

#include<stdio.h>

void main() {
    int k, i, j, sum=0;
    char ch='A';

    for(i=1;i<=5;i++){
        for(k=0;k<=5-i;k++){
            printf(" ");
        }
       
        for(j=1;j<i+1;j++){
            if(i%2==1){
                printf("%d ", j);
            }
            else{
                printf("%c ", ch++);
            }
        }
        printf("\n");
    }
}