
#include<stdio.h>

// Input : 3
// Output : 3   2   1

// Input : 7
// Output : 7   6   5   4   3   2   1

void Display();         // Declaration

int main()
{
    Display();      // Disaply(3);
    
    return 0;
}

void Display()
{
    int i = 0;

    for(i=5; i>=1; i-- )
     {
         printf("%d\n",i);
     }
}
