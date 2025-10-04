//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
int main()
{   
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    char ch;
    printf("Enter the character to be searched:");
    scanf("%c",&ch);
    int count=0;
    for(int i=0;str[i]!='\n';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Frequency of given chararcter in string:%d",count);
    return 0;
}