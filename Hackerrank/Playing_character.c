#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s[50],p[100];
    
    scanf("%c",&ch);//Read a char type variable, store it on the location named "ch"

    scanf("%s\n",&s);//Read a string and store ir on array named "s"
    
    scanf("%[^\n]s",&p);  //Read a string until, including spaces, until you receive a next line and store it on array named "sen"
     // [^\n] => it tell that read the character till the end of the line

     
    //scanf(" %[^\n]%*c", &p);  // this will also work

    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",p);
   
    return 0;
}

