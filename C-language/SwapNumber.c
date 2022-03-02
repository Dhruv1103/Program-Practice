// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a=10,b=20,temp;
//     temp=a;
//     a=b;
//     b=temp;

//     printf("the number is %d",a);
//      printf("the number is %d",b);
//       printf("the number is %d",temp);
//     return 0;
// }

#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");//20
  scanf("%lf", &a);
  printf("Enter b: ");//15
  scanf("%lf", &b);

  // swapping

  
  a = a - b;   //20-15=5 now a=5

  b = a + b; //5+15=20 now b=20

  a = b - a;//20-5=15 now a=15 

  // %.2lf displays numbers up to 2 decimal places
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}
