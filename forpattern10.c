//13(B)b.

#include<stdio.h>

void main(){
    int i,j,sum=0;

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            sum=sum+1;
            if(sum%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        
        }
        printf("\n");
    }
}