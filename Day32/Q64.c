//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    //changing number to array
    int digits=0;
    int temp=num;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=num;
    int arr[digits];
    for(int i=digits-1;i>=0;i--)
    {
           arr[i]=temp%10;
           temp=temp/10;
    }

    int max_no=arr[digits-1]; // to store the number that appears max times
    int max_count=0;// to store the count of max number
    for(int i=0;i<digits;i++)
    {
        int count=0;
        for(int j=0;j<digits;j++)
        {   if(arr[i]==arr[j])
            {
               count++;
            }

        }
        if(count>max_count)
        {
            max_no=arr[i];
            max_count=count;
        }
    }
    printf("Number that repeats most:%d",max_no);
}
