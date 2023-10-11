//12(A)d 123.

#include<stdio.h>

void main(){
    int i,j,a=1;
     for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%d ",a);
        }
        a++;
        printf("\n");
    }
}