//C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
#include<conio.h>
int main(){
     double num1,num2,multi;
    printf("enter 2 number ");
    scanf("%lf %lf",&num1,&num2);
    multi = num1 * num2;

     // %.2lf displays number up to 2 decimal point
    printf("multiplication of 2 number is %.2lf",multi);
    return 0;
}