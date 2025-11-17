/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>

enum Status{SUCCESS,FAILURE,TIMEOUT};

int main()
{
   char input[10];
   printf("Enter the status:");
   scanf("%s",input);
   enum Status s;

   //converting string to enum
   if(strcmp(input,"SUCCESS")==0)
      {
        s=SUCCESS;
      }
    else if(strcmp(input,"FAILURE")==0)
    {
        s=FAILURE;
    }
    else if(strcmp(input,"TIMEOUT")==0)
    {
        s=TIMEOUT;
    }
    else{
        printf("Invalid Input\n");
        return 0;

    }
    //Print message
    if(s==SUCCESS)
    {
        printf("Operation Successful");
    }
    else if(s==FAILURE)
    {    printf("Operation failed\n");
      }
     else if (s==TIMEOUT)
     {
         printf("Operation timed out\n");
     }
        return 0;
}