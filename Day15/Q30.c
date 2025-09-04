//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{   int num;
    printf("Enter a positive number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Number is negative");
    }
    else
    {
        int rev=0; // to store the reversed no.
        int rem=0;// to store the remainder i.e also to calc separate digits ahead
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        printf("Reversed no.=%d",rev);
    }
    return 0;
}