//5A(6) Check whether given character is vowel or consonant.

#include<stdio.h>

void main(){
    char c;
    printf("enter charactar : " );
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("charactar is vowel");
    }
    else{
        printf("charactar is constanat");
    }

}
