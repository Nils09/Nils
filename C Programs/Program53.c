#include<stdio.h>

int Minimum(int iNo1, int iNo2) // 15   10
{
    int iResult = 0;
    
    if(iNo1 < iNo2)
    {
        iResult = iNo1;
    }
    else
    {
        iResult = iNo2;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);   // 15
    printf("Enter second number\n");
    scanf("%d",&iValue2);   // 10
    
    iRet = Minimum(iValue1, iValue2);
    printf("Minimum is : %d\n",iRet);
        return 0;
}

