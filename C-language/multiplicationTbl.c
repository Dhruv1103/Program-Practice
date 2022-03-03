#include<stdio.h>
int main(){
    int num1,i,mul;

    scanf("%d",&num1);
    for(i=1;i<=10;++i)
    {
        mul*=i;
        printf("%d*%d=%d \n",num1,i,num1*i);
    }
    return 0;
}