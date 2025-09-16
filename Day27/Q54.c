//Q54: Write a program to print the following pattern:
/*
*

***

*****
*******
***

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include<stdio.h>
int main(){
for(int i=1;i<=9;i++)
{
    if(i==1||i==9)
    {
        for(int j=1;j<=1;j++)
           printf("*");
           printf("\n");
    }
    else if(i==3||i==7)
    {
          for(int j=1;j<=3;j++)
             printf("*");
        printf("\n");
    }
    else if(i==5)
    {
        for(int j=1;j<=5;j++)
           printf("*");
       printf("\n");
    }
    else if(i==6)
    {
        for(int j=1;j<=7;j++)
          printf("*");
        printf("\n");
    }
     else
     {
         printf("\n");
     }

    // if(i!=1||i!=4||i!=5||i!=9)
    // {
    //     printf("\n");
    // }

}
return 0;
}
