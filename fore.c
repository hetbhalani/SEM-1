//12(B)2 Estimate the value of the mathematical constant e.

#include<stdio.h>

void main(){
    int i,n=15,mul=1;
    float ans=1;
   
    for(i=1;i<=n;i++){
        mul=mul*i;
        ans+=1.0/mul;
        
    }
    printf("%f", ans);
}