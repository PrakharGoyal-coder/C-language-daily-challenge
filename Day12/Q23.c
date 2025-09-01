//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main()
{   int days;
    printf("Enter the late days:");
    scanf("%d",&days);
    if(days ==0)
   {
    printf("Fine Rs.90");
   }
   else if(days>0 && days<=5)
   {
      printf("Fine Rs.%d",(2*days));
   }
   else if(days>5 && days <=10)
   {
    printf("Fine Rs%d",(4*days));
   }
   else if(days>10 && days <=30)
   {
    printf("Fine Rs%d",(6*days));
   }
   else if(days>30)
   {
     printf("Membership Cancelled");
   }


}