// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int num1,num2;
//     float num3,num4;
    
    
//     scanf("%d %d",&num1, &num2);
//     scanf("%f %f",&num3, &num4);
//     printf("%d %d \n", num1+num2, num1-num2);
//     printf("%.1f %.1f", num3+num4, num3-num4);
    
//     return 0;
// }

#include<stdio.h>

int main()
{
    int i, j;
    float f, g;
    scanf("%d %d %f %f", &i, &j, &f, &g);
    printf("%d %d\n%.1f %.1f", i+j, i-j, f+g, f-g);
    return 0;
}