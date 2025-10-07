//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    char word[100];
    int k=0;
    char str2[100]="";
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch==' ' || ch=='\n')
        {
            word[k]='\0';
            char rev_word[100];
            int x=0;
            for(int j=k-1;j>=0;j--)
            {
                rev_word[x++]=word[j];
            }
            rev_word[x]='\0';
           strcat(str2,rev_word);
           strcat(str2," ");
           k=0;
        }
        else
        {
            word[k++]=ch;
            
        }
    }
    puts(str2);
    return 0;
}
