//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main()
{
   float percent; // to store the percentage
   //inputting thr percentage
   printf("Enter the percentage:");
   scanf("%f",&percent);
   //checking and printing grades
   if (percent<0 || percent>100)  // invalid input
   {
    printf("Invalid percentage");
   }
   else 
   {
    if(percent>=90 && percent<=100)
    {
        printf("Grade A");
    }    
    else if(percent>=80 && percent<90)
    {
         printf("Grade B");
    }

    else if(percent>=70 && percent<80)
    {
         printf("Grade C");
    }
    else if(percent>=60 && percent<70)
    {
         printf("Grade D");
    }
    else if(percent>=50 && percent<60)
    {
         printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    
 

  }
  return 0;
}