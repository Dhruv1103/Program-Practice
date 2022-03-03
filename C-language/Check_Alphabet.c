#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch >='A'&& ch<= 'Z' )||( ch >='a'&& ch<='z'))
    {
        printf("it's alphabet");
    }else{
        printf("it's not ");
    }
    return 0;
}