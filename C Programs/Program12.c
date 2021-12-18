
#include<stdio.h>

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
    
    for(i = 1; i <= iValue; i++)
    {
        printf("Marvellous\n");
    }
}
