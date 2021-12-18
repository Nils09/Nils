#include<stdio.h>

int main()
{
    int Arr[5];
    int iSum =0, iCnt = 0;
    
    printf("Enter numbers\n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    printf("Addition is : %d\n",iSum);
    
    return 0;
}
