/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
enum Traffic{RED=1,YELLOW,GREEN};
void action(enum Traffic light)
{
    switch(light)
    {
    case RED: printf("STOP!\n");break;
    case YELLOW: printf("READY\n");break;
    case GREEN: printf("Go\n");break;
    default:printf("Invalid choice!\n");
    }
}
int main()
{
    int choice;
    printf("Menu\n");
    printf("1.RED\n");
    printf("2.YELLOW\n");
    printf("3.GREEN\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    enum Traffic light=choice;
    action(light);
    return 0;
}
