#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);// store 10
 
  // iterate at least once, then until n becomes 0
  // remove last digit from n in each iteration
  // increase count by 1 in each iteration
  do {
    n /= 10;    //10 -> 10/10= 1-> n  -> 0+1=1 -> 1 condition will false and terminate the loop      
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}