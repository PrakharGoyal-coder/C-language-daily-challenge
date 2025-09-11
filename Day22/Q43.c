//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum=0; //to store sum of factorial of digits
    int temp=num;
    while(temp>0)
    {
        int d=temp%10;
        sum=sum+factorial(d);
        temp=temp/10;
    }
    if(sum == num)
    {
        printf("%d is a strong number",num);
    }
    else
    {
        printf("%d is NOT a strong number",num);
    }
    
  return 0;
}
int factorial(int n)
{
   int fact=1;
   for(int i=1;i<=n;i++)
   {
    fact=fact*i;
   } 
   return fact;
}