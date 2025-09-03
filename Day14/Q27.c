//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num>0){
    int sum=0; // to store the sum of odd numbers
    //calculating sum of odd no.
    for(int i=1;i<2*num;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    printf("sum of odd numbers till %d=%d",num,sum);
}
else{
    printf("Invalid input");
}
    return 0;
}