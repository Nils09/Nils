#include<stdio.h>

void DisplayFactors(int);

int main()
{
    int iNo = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    DisplayFactors(iNo);
    
    return 0;
}

void DisplayFactors(int iValue)
{
    int iCnt = 0;   // Loop Counter
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    //          1             2                 3
    for(iCnt = 1; iCnt < iValue; iCnt++)        // O(N)
    {
            if((iValue % iCnt) == 0)    // ICnt is a factor
            {
                printf("%d\n",iCnt);
            }
    }
}

/*
iValue = 8

(8 % 1) == 0            1
(8 % 2) == 0            2
(8 % 3) == 0
(8 % 4) == 0            4
(8 % 5) == 0
(8 % 6) == 0
(8 % 7) == 0
 
 */
















