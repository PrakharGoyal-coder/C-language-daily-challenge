//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main()
{
    int hr=0,min=0,sec=0;
    printf("enter the time in seconds:");
    scanf("%d",&sec);
    while(sec>=60)
    {
        min++;
        sec=sec-60;
    }
    while(min>=60)
    {
        hr++;
        min=min-60;
    }
    printf("%d:%d:%d",hr,min,sec);
    return 0;

}