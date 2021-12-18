// Input : 127894
// Output : 3

// Input : 561750
// Output : 4

#include<stdio.h>

int Count(int);

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf("Digits greater than 5 are : %d\n",iRet);
    return 0;
}
int Count(int iNo)
{
    int iCnt = 0, iDigit = 0;
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= 5)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
