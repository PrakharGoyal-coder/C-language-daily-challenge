//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include<stdio.h>
int main()
{
    int year;
    //inputting year
    printf("Enter the year:");
    scanf("%d",&year);
    //checking if leap year or not
    if(year%4==0) //divisible by 4 test
    {
        if(year%100==0) // divisible by 100 test
        {
            if(year%400==0)
            {   //divisible by 4 and 100 and 400 
                printf("Leap year");
            }
            else
            {  //divisible by 4 and 100 but not by 400
                printf("Not a leap year");
            }

        }
        else
        {  //only divisible by 4
            printf("Leap year");
        }
    }
    else //not divisible by 4
    {
        printf("Not a leap year");
    }
}