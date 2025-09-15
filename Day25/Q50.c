//Q50: Write a program to print the following pattern:

/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
int main()
{
    for(int i=5,sp=0;i>=1;i--,sp+=2)
    
    {
        for(int j=1;j<=sp;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
            printf("*");
       }
       printf("\n");
    }
}