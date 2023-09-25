#include<stdio.h>

void main(){
    int a,b,c,d,e,per;
    printf("enter 5 subjects mark : ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    per=(a+b+c+d+e)/5.0;

    if(per >= 0 && per <= 35){
        printf("fail");
    }
    else if(per > 36 && per <= 45){
        printf("pass");
    }
    else if(per > 46 && per <= 60){
        printf("second class");
    }
    else if(per > 61 && per <= 70){
        printf("first class");
    }
    else if(per > 71 && per <= 100){
        printf("destriction");
    }
    else{
        printf("enter velid marks");
    }
}