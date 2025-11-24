/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include<stdio.h>
struct Date
{
    int day,month,year;
};
struct Employee
{ char name[100];
    int id;
   struct Date join;

};
int main()
{
    struct Employee e;
    //inputting
    printf("Enter the name:");
    scanf("%s",e.name);
    printf("Enter the ID:");
    scanf("%d",&e.id);
    printf("Enter the joining date:");
    scanf("%d %d %d",&e.join.day,&e.join.month,&e.join.year);
    //outputting
    printf("Name:%s |ID :%d |Joining Date :%02d/%02d/%04d\n",e.name,e.id,e.join.day,e.join.month,e.join.year);
    return 0;
}