// //C Program to sum of natural number
// #include<stdio.h>
// int main()
// {
//     int i,sum=0,num1;
    
//     scanf("%d",&num1);   
//     for(i=1;i<num1;++i)
//     {
//         sum += i;
//     }
    
//     printf("sum is = %d", sum);
//     return 0;
// }

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

