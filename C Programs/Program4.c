// Accept number from user and display that number of * on screen.
// Input : 4
// Output : *   *   *   *  

// Input : 2
// Output : *   *   

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
