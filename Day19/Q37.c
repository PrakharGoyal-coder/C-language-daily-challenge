//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main()
{
   int a,b; // to store the two numbers
   //inputting numbers
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);
   if(a==0 && b==0)
   {
    printf("LCM of 0 and 0 is undefined");
   }
   else if(a==0||b==0)
   {
    printf("as one number is 0  so LCM =0");
   }
   else if(a<0 || b<0)
   {
    printf("Both number should be positive");
   }
   else
   {
    int prod=a*b; //as max possible lcm of two numbers can be their product
    for(int i=1;i<=prod;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM of %d and %d = %d ",a,b,i);
            break;

        }
     }
   }

   return 0;

}