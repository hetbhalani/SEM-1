//9B(1) Print all uppercase and lowercase alphabets.

#include<stdio.h>

void main(){
    
    char ch='a',cha='A';

    while(ch<='z'){
        printf("%c",ch++);

    }
    printf("\n");
    while(cha<='Z'){
        printf("%c",cha++);
    }
}