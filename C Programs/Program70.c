#include<stdio.h>

int main()
{
    int Arr[7];
    int iSum =0;
    
    printf("Enter numbers\n");
    
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    scanf("%d",&Arr[5]);
    scanf("%d",&Arr[6]);
    
    iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4] + Arr[5] + Arr[6];
    
    printf("Addition is : %d\n",iSum);
    
    return 0;
}
