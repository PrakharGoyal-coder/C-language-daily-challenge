//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
int main()
{
    int num; //to store input number
    //inputting number
    printf("Enter the number:\n");
    scanf("%d",&num);
     if(num<0)
    {
      printf("error:negative no. entered");
    }
    else
   {
     int sum=0;//to store sum of cubes of digits
     int temp=num;  //tempororay variable to store value of num
      while(temp>0)
      {
        int d=temp%10;  // extracting last digit of temp(num)
        sum=sum+(d*d*d);
        temp=temp/10; //removing last digit of temp(num)
      }
      //checking if armstrong or not and printing the result
      if(sum==num)
      {
        printf("Armstrong");
      }
     else
      {
        printf("Not Armstrong");
      }
    }
    return 0;
}