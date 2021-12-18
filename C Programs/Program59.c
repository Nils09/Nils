// Input :      6

// iCnt           1    2   3   4    5   6

// Output :    a    b   c   d   e   f

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    
    for( iCnt = 1 , ch = 'A' ; iCnt<= iNo;  iCnt++, ch++)
    {
        printf("%c\n",ch);
    }
    }

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Display(iValue);    // Display(5)
    
    return 0;
}
