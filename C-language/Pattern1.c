/* Pattern program

*
* *
* * *
* * * *
* * * * *  

*/
#include<stdio.h>
int main(){
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
       printf("\n");         
    }
    
    return 0;
}