/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
enum Gender{MALE=1,FEMALE};
int main()
{   int choice;
    printf("1.MALE\n");
    printf("2.FEMALE\n");
    printf("Enter your gender:");
    scanf("%d",&choice);
    enum Gender gen=(enum Gender)choice;
    switch(gen){
        case MALE: printf("Male");break;
        case FEMALE: printf("Female\n");break;
        default:printf("invalid input");
    }
    return 0;
}