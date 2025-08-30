//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>
int main()
{
   int a,b,c;  //to store the sides of triangle
   //inputting the sides of triangle
   printf("Enter the sides of triangle:");
   scanf("%d",&a);
    scanf("%d",&b);
   scanf("%d",&c);
// checkig if trianle is equilateral
  if((a==b)&&(a==c)&&(b==c))
  {
    printf("Equilateral");
  }
  else if((a==b)||(b==c)||(a==c)) //checking if triangle is isosceles
  {
    printf("Isosceles");
  }
  else
  {
  printf("Scalene");

  }
  return 0;
}