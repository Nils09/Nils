#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],  int iSize)
{
    int i = 0, iMin = Arr[0];
    //     1            2           3
    for(i = 1 ; i < iSize; i++)
    {
        if(Arr[i] < iMin)   // 4
        {
            iMin = Arr[i];
        }
    }
    return iMin;    // return 102
}

int main()
{
    int iLength = 0, i = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Minimum(ptr,iLength);
    printf("Minimim is : %d\n",iRet);
    free(ptr);
    return 0;
}
