//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter full name: ");
    fgets(name, 100, stdin);
    char surname[50];
 
    int len=strlen(name);
    len=len-1;
    int lastSpace=-1;

    // Finding the position of the last space
    for (int i=0;i<len;i++)
    {
        if (name[i]==' ')
            lastSpace=i;
    }

    // Print initials for all words except the last word
    for (int i=0;i<lastSpace;i++)
    {
        if(i==0 && name[i]!=' ')
        {
            printf("%c.", name[i]); 
        }
        else if(name[i]==' ' && name[i + 1]!=' ')
        {
            printf("%c.",name[i + 1]); 
        }
    }

    
     // Copy surname into separate string
    if(lastSpace!=-1)
    {
        int j=0;
        for (int i=lastSpace+1;i<len;i++)
        {
            surname[j]=name[i];
            j++;
        }
        surname[j]='\0';  
     }
     if (lastSpace!=-1)
        printf(" %s", surname);


    printf("\n");
    return 0;
}
