/*Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[40];
    int roll;
    int marks;

};
int main()
{
    struct student *s=malloc(sizeof(struct student));
    if(s==NULL)
    {
        printf("Memory Allocation Failed!\n");
        return 1;

    }
    //inputting details
     printf("Enter the name:");
    scanf("%s",s->name);
    printf("Enter the roll:");
    scanf("%d",&s->roll);
    printf("Enter the marks:");
    scanf("%d",&s->marks);
    //printing 
    printf("Name: %s | Roll: %d | Marks: %d\n",s->name,s->roll,s->marks);

    free(s);
    return 0;

}