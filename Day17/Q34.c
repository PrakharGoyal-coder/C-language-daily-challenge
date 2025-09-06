//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main()
{
   int num; // to store user entered no.
   //inputting number
   printf("Enter the number:");
   scanf("%d",&num);
   if(num<0)
   {
    printf("error:negative no. entered");
   }
   else
   {
      int count=0; //counter variable to count no. of factors of num
      for(int i=1;i<=num;i++)
        {
          if(num%i==0) // is i is a factor of num
          {
           count++;
          }
        }
      if(count==2) //i.e factor is 1 and number itself
      {
       printf("Prime");
       }
       else
       {
         printf("Not prime");
       }
    }
   return 0;
}