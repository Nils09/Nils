
// Input :      5
// Output :     *   *   *   *   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
   //           1           2              3
for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("*\t");      // 4
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Display(iValue);    // Display(5)
    
    return 0;
}
