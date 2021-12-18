#include<stdio.h>

int Addition(int *Brr, int iSize)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum +(*Brr);
        Brr++;
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iRet = 0,iCnt =0;
    
    printf("Enter numbers\n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr,5);   // Addition(100);
    printf("Addition is : %d\n",iRet);
    
    return 0;
}
