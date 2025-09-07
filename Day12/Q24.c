//Q24: Write a program to calculate an electricity bill based on units consumed.
//First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main()
{                                                               
    int units;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    int bill=0;

    
    if(units==0)
    {   
         bill=0;
    }
    else if(units>0 && units<=100)
    {   bill=units*5;
    }
    else if(units>100 && units<=200)
    {   bill=100*5+(units-100)*7;
    }
    else if(units>200 && units<=300)
    {   bill=100*5+100*7+10*(units-200);
    }
    else if(units>300)
    {   bill=100*5+100*7+100*10+(units-300)*12;
   }
   printf("Bill: Rs%d",bill);
   return 0;

}