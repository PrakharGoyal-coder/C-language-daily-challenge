/*Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include<stdio.h>
struct student
{
    char name[40];
    int roll;
    int marks;

};
int main()
{
    struct student s={"Ram",105,90};
    struct student *ptr=&s;
    //taking input for modifying values
    printf("Enter the pointer modifying values:\n");
    printf("Enter the name:");
    scanf("%s",ptr->name);
    printf("Enter the roll:");
    scanf("%d",&ptr->roll);
    printf("Enter the marks:");
    scanf("%d",&ptr->marks);
    //outputting the values 
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",ptr->name,ptr->roll,ptr->marks);
    
    return 0;
     
}
