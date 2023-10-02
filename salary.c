/*6A(2) Enter basic salary of an employee and calculate Gross salary according to given conditions:
- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic
*/

#include<stdio.h>

void main(){
    int n;
    float a;
    printf("enter salary : ");
    scanf("%d", &n);
    if(n >= 10000 && n < 20000){
        a=n+(n*0.2)+(n*0.8);
        printf("%f", a);
    }
    else if(n >= 20000 && n < 30000){
        a=n+(n*0.25)+(n*0.9);
        printf("%f", a);
    }
    else if(n >= 30000){
        a=n+(n*0.3)+(n*9.5);
        printf("%f",  a);
    }
    else{
        printf("enter velid salary");
    }
}
