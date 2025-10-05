//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
int main()
{
    char str1[100];
    printf("Enter the string:");
    fgets(str1,100,stdin);
    char str2[100];
    
    int x=0;
    for(int i=0;str1[i]!='\n';i++)
    {
        char ch=str1[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||
            ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            continue;
        }
        else
        {
            str2[x]=ch;
            x++;

        }

    }
    str2[x]='\0';
    printf("String without vowels:");
    puts(str2);
    return 0;
}