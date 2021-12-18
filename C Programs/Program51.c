#include<stdio.h>

float Average(int iNo1, int iNo2,  int iNo3)
{
    int iSum = 0;
    float fResult = 0.0;
    
    iSum = iNo1 + iNo2 + iNo3;
    fResult = iSum / 3;
    
    return fResult;
}

int main()  // Entry Point function
{
    // Local Variables
    int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    float fRet = 0.0;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    printf("Enter third number\n");
    scanf("%d",&iValue3);
    fRet = Average(iValue1, iValue2, iValue3);
    printf("Average is : %f\n",fRet);
    return 0;
}

