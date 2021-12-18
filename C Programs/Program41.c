#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {printf("Number is Perfect\n");}
    else
    {printf("Number is not perfect\n");}
    return 0;
}

bool CheckPerfect(int iNumber)
{
    int iSum = 0, iCnt = 0;
    if(iNumber < 0)
    {iNumber = -iNumber;}
    
    for(iCnt = 1; iCnt <= (iNumber / 2); iCnt++)
       {
           if((iNumber % iCnt) == 0)       // 4
           {
               iSum = iSum + iCnt;
           }
       }
    if(iSum == iNumber)
    {return true;}
    else
    {return false;}
}
