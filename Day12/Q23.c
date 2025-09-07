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
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

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
    int fine=0;  // to store the fine
    if(days ==0)
   {
     fine=0;   
     printf("fine=Rs%d",fine);
   }
   else if(days>0 && days<=5)
   {
      fine=2*days;
       printf("fine=Rs%d",fine);
   }
   else if(days>5 && days <=10)
   {
      fine=(2*5)+(4*(days-5));
       printf("fine=Rs%d",fine);
   }
   else if(days>10 && days <=30)
   {
    fine=(2*5)+(4*5)+(days-10)*6;
     printf("fine=Rs%d",fine);
   }
   else if(days>30)
   {
     printf("Membership Cancelled");
   }
   


}