//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include<stdio.h>
int main()
{                                                               
    int units;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    int bill=0;

    /*
       Note: This IS a slab-wise calculation.
       Each slab of units is charged at its own rate, and the bill is cumulative.

       Example:
      for first 100 units-> Rs5 per unit    i.e 5*units
      for next 100 units -> Rs 9 per unit   i.e 5*100+(units-100)*9
      for >200 -> Rs 16 per unit   i.e 5*100+6*100+(units-200)*16
    */
    if(units==0)
    {   
         bill=0;
    }
    else if(units>0 && units<=100)
    {   bill=units*5;
    }
    else if(units>100 && units<=200)
    {   bill=100*5+(units-100)*9;
    }
    else if(units>200)
    {   bill=100*5+100*9+(units-200)*16;
   }
   printf("Bill: Rs%d",bill);
   return 0;

}