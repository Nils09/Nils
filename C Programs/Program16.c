
#include<stdio.h>

// Input : 3
// Output : 3   2   1

// Input : 7
// Output : 7   6   5   4   3   2   1

void Display(int );         // Declaration

int main()
{
    int iNo = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    Display(iNo);      // Disaply(4);
    
    return 0;
}

void Display(int iValue)
{
    int i = 0;
    //      1            2      3
    for(i=iValue; i>=1; i-- )
     {
         printf("%d\n",i);  // 4
     }
}
