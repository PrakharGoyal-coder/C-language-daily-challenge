//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter the string:");
    fgets(str,100,stdin);
    char rev[100];
    int len=strlen(str);
    len=len-1;  // to avoid '\n'
    int k=0;
    for(int i=len-1;i>=0;i--)
    {
        rev[k++]=str[i];
    }
    rev[k]='\0';
    printf("reversed string:");
    puts(rev);
    return 0;
}