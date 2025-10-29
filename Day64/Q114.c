/*Q114: Write a program to take a string s as input.
The task is to find the length of the longest substring without repeating characters.
Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter the string:");
    scanf("%s",s);

    int n=strlen(s);
    int maxLen=0;
    
    //loop for starting point of substring
    for(int i=0;i<n;i++)
    {
        int flag=1;   // assume substring is unique

         //// Loop to expand substring
        for(int j=i;j<n;j++)
        {  
            flag=1;   //// reset flag every time we check a new character
            for(int k=i;k<j;k++)
            { //// Check if s[j] repeats between i and j-1
                if(s[j]==s[k])
                {
                    flag=0;// found repeating character
                    break;

                }
            }
           if(flag==0)
           {
            break;  // stop if repeat found
           }
           // Update max length
           int currentLen=j-i+1;
           if(currentLen>maxLen)
           {
            maxLen=currentLen;
           }
        }// j loop close
    } // i loop close
    printf("Length of longest substring without repeating characters:%d\n",maxLen);
    return 0;
}