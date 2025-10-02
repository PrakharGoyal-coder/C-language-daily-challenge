//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    char ch;
    int i=0;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        if(ch!='\n')
        {
        str[i]=ch;
        i++;
        }
    }
    str[i]='\0';
    int len=strlen(str);
    
    char rev[100];
    int k=0;
    for(int i=len-1;i>=0;i--)
    {
        rev[k++]=str[i];
    }
    rev[k]='\0';
    int x=strcmp(str,rev);
    if(x==0)
    {
        printf("Palindrome string");

    }
    else{
        printf("Not a palindrome string");
    }
    return 0;

}