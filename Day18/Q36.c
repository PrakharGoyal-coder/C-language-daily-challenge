//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int num1,num2;// to store 2 numbers entered by user
    printf("ENter two numbers:");
    scanf("%d %d",&num1,&num2);
    int gcd=0;//to store the greatest common divisor of 2 numbers
    int small=0;//to store the smaller among 2 numbers 
    if(num1>num2)
    {
       small=num2;
    }
    else
    {
        small=num1;
    }
    for(int i=1;i<=small;i++)
    {
        if((num1%i ==0) && (num2%i ==0))
        {
            gcd=i;
        }
    }
    printf("HCF = %d",gcd);
    return 0;
}