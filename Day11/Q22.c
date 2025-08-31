//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/#include<stdio.h>
int main()
{   
    int cp,sp; //cp-to store cost price ,sp-to store the selling price
    printf("enter cost price and selling price:");
    scanf("%d %d",&cp,&sp);
    if(cp>sp) //loss case
    {float percent=((cp-sp)*100)/cp; 
      printf("Loss %.2f %% ",percent);

    }
    
   else if(sp>cp) //loss case
    {float percent=((sp-cp)*100)/cp; 
      printf("Profit %.2f %% ",percent);
      
    }
    else 
    {
        printf("No Profit No Loss");
    }
     return 0;
}