/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    printf("Enter string s:");
    scanf("%s", s);
    printf("Enter string t:");
    scanf("%s", t);
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1!=len2)
    {
        printf("Not Anagram");
        return 0;
    }
    for(int i=0;s[i]!='\0';i++)
    {
        int count1=0,count2=0;
        for(int k=0;s[k]!='\0';k++)
        {
            if(s[i]==s[k])
            {
                count1++;
            }
        }
        for(int j=0;t[j]!='\0';j++)
        {
            if(s[i]==t[j])
            {
                count2++;
            }
        }
        if(count1!=count2)
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;

}