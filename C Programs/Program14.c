
#include<stdio.h>

// Input : 3
// Output : 1   2   3

// Input : 7
// Output : 1   2   3   4   5   6   7

void Display(int);         // Declaration

int main()
{
    int iNo= 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    Display(iNo);      // Disaply(3);
    
    return 0;
}

void Display(int iValue)
{
    int i = 0;
    
    if(iValue == 0)         // Filter
    {
        printf("Your entered number is 0\n");
        return;
    }
    
    if(iValue < 0)          // Input Updator
    {
        iValue = -iValue;
    }
    
    for(i = 1; i <= iValue; i++)
    {
        printf("%d\n",i);
    }
}
