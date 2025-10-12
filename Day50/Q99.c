//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char date[20];         
    char new_date[20]=""; 
    printf("Enter date in dd/04/yyyy format:");
    scanf("%s",date);

    // Add first two characters (day)
    strncat(new_date,date,2);  
    strcat(new_date,"-");   
    // Add month Apr
    strcat(new_date,"Apr");
    strcat(new_date,"-");     
    // Add year directly (from index 6 to 9)
    strncat(new_date,date+6,4); 

    printf("Formatted date: %s\n",new_date);
    return 0;
}

