//find Quotient and Remainder 
#include<stdio.h>
int main()
{
    int a,b,c,d; 
    printf("enter the number1");
    scanf("%d",&a);
    printf("enter the number2");
    scanf("%d",&b);
    c=a/b;          
    d=a%b;
    printf("Quotient is %ld",c);   
    printf("Remainder is %ld",d); 
    return 0;
}