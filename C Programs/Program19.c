
#include<stdio.h>
// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

int Factorial(int);         // Declaration

int main()
{
    int iNo = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet = Factorial(iNo);
    
    printf("Factortial is : %d\n",iRet);
    
    return 0;
}

int Factorial(int iValue)
{
    int iFact = 1;
    int iCnt = 0;
    
    if(iValue < 0)  // Updator
    {
        iValue = -iValue;
    }

   //       1               2                   3
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt; //  4
    }
    
    return iFact;
}
