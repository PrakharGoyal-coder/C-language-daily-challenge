//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main()
{
    char ch;
    //inputting the character
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')  //checking if it is uppercase alphabet
    {
        printf("Uppercase alphabet");
    }
    else if(ch>='a'&& ch<='z')  //checking if lowercase alphabet
    {   
        printf("Lowercase alphabet");
    }
    else if(ch>='0' && ch<='9')  //checking if digit
    {
        printf("Digit");

    }
    else   
    {
        printf("Special character");
    }
}