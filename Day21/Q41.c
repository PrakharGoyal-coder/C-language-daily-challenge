//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
     if(num<0)
    {
        printf("error:Negative no. entered");
        return 0;
    }

    int temp=num;
    int digits=0;//to count digits
    int powTen=1;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
        if(temp>0)
        {
            powTen*=10;
        }

    }
    //if only 1 digit nothing to swap
    if(digits==1)
    {
        printf("%d",num);
        return 0;
    }
    int first=num/powTen;
    int last=num%10;
    int middle=(num%powTen)/10;
    int swapped=last*powTen + middle*10+first;
    printf("swapped number:%d",swapped);
    return 0;

}