//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error:negative no. enetered!");
    }
    else
    {
        int rev=0;// to store reversed number
        int temp=num;  //to store value of num temporarily

        while(temp>0)
        {
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(num == rev)
        {
            printf("%d is palindrome",num);
        }
        else 
        {
            printf("%d is NOT palindrome",num);
        }
    }
    return 0;
}