//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    int len=strlen(str);
    char word[100];
    char longest[100];
    int maxLen=0,word_len=0;
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            word[j]='\0';
            word_len=strlen(word);
            if(word_len>maxLen)
            {
                maxLen=word_len;
                strcpy(longest,word);
            }
            j=0;
        }
        else
        {
            word[j++]=str[i];
        }

    }
    printf("Longest word:%s",longest);
    return 0;
}