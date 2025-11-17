/*Q123: Read a text file and count the total number of characters, words, and lines.
 A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("sample.txt","r");
    if(fptr==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    int previousWasSpace=1;//start as space so first word will be counted
    int lines=0,characters=0,words=0;
    int ch=fgetc(fptr);

    while(ch!=EOF)
    {   
         
        if(ch!='\n')
             {
                characters++;  
             }
        if(ch=='\n')
             {
                lines++;  
             }

        if(ch==' '|| ch=='\n' ||ch=='\t')
        {
            previousWasSpace=1;
        }
        else
        {
            if(previousWasSpace==1)
            {
                words++;
            }
            previousWasSpace=0;
        }
        if(characters>0 && lines==0)
            lines=1;
        ch=fgetc(fptr);
          
    }
    printf("Characters=%d\n",characters);
    printf("Words=%d\n",words);
    printf("lines=%d\n",lines);
    fclose(fptr);
    return 0;
}