/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
enum User_Roles{ADMIN=1,USER,GUEST};
int main()
{
    int choice;
    printf("MENU\n");
    printf("1.Admin\n");
    printf("2.User\n");
    printf("3.Guest\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    enum User_Roles x=(enum User_Roles)choice;
    switch(x)
    {
        case ADMIN:printf("Admin Login Successful\n");break;
        case USER:printf("User Login Successful\n");break;
        case GUEST:printf("Welcome Guest!");break;
        default:printf("invalid choice");
    }
    return 0;
}