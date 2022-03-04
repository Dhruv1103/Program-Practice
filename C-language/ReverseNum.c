#include<stdio.h>
int main()
{
    int n,revrse=0,remainder;
    scanf("%d",&n);
    
    while(n!=0){
        remainder=n%10;
        revrse=revrse*10+remainder;
        n/=10;
    }
    printf("revrse number is %d",revrse);
    return 0;
}


// n    	n != 0  	remainder   	reverse
// 2345	    true	        5	        0 * 10 + 5 = 5
// 234	    true	        4	        5 * 10 + 4 = 54
// 23	    true	        3	        54 * 10 + 3 = 543
// 2	    true	        2	        543 * 10 + 2 = 5432
// 0	    false	        -	        Loop terminates.