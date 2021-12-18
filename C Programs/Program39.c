#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
bool CheckPallindrome(int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {printf("Number is pallindrome\n");}
    else
    {printf("Number is not pallindrome\n");}
    return 0;
}

bool CheckPallindrome(int iInput)
{
    int iNumber = 0;
    iNumber = Reverse(iInput);
    if(iNumber == iInput)
    {return true;}
    else
    {return false;}
}

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

