//Q17: Write a program to find the roots of a quadratic equation and categorize them.
/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/
#include<stdio.h>
#include<math.h>  // to include math functions like sqrt
int main()
{
    int a,b,c ;// a-to store coeff. of x^2 ,b- to store coeff of x
               // c to strore constant term
    
    printf("Enter the coefficient of x^2:");
    scanf("%d",&a);
    printf("Enter the coefficient of x:");
    scanf("%d",&b);
    printf("Enter the constant term with sign:");
    scanf("%d",&c);
    float x1=0,x2=0; // to store the roots
    float disc=(b*b)-(4*a*c);  // disc to store discriminant
    if(disc<0)  //discriminant is negative so  complex roots
     {
        printf("Roots are complex");
     }
    else if(disc>0)  //discriminant is positive & not zero so real and different roots
    {
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        printf("Roots are real and different:%.2f, %.2f",x1,x2); //.2f to print till 2 decimal places
 
    }
    else // discriminant =0 so real and equal roots
    {
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        printf("Roots are real and same:%.2f",x1); //.2f to print till 2 decimal places
  
    }
    return 0;
    

}