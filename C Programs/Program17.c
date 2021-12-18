
#include<stdio.h>

// Input : 3
// Output : 6

// Input : 5
// Output : 15

int Addition(int);         // Declaration

int main()
{
    int iNo = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet = Addition(iNo);
    
    printf("Addition is : %d\n",iRet);
    
    return 0;
}

int Addition(int iValue)
{
    int iSum = 0;
    int iCnt = 0;
   //       1               2                   3
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iSum = iSum + iCnt; //  4
    }
    
    return iSum;
}
