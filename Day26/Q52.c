//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int stars=0;
        if(i==1||i==5)
              stars=1;
        else if (i==2||i==4)
               stars=3;
        else if(i==3)
            stars=5;
        for(int j=1;j<=stars;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
        
    
}