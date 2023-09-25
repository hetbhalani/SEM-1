#include<stdio.h>

void main(){
    int i=1,oddcount=0,evencount=0;

    while(i<=10){
        scanf("%d", &i);
        if(i%2==0){
            evencount += 1;
        }
        else{
            oddcount += 1;
        }
        i++;
    }
    printf("even count is : %d\n", evencount);
    printf("odd count is : %d\n", oddcount);
}