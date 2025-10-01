//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    int consonant=0,vowel=0;
    for(int i=0;str[i]!='\n';i++)
    {
        char ch=str[i];
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        {
            
            if(ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U'||
            ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
   printf("Vowels=%d,  Consonants=%d",vowel,consonant);
   return 0;
}