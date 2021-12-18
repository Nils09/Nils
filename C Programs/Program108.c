#include <stdio.h>

void DisplayTable()
{
    int i = 0;
    
    printf("ASCII table is \n");
    printf("***************************************\n");
    printf("Decimal\tCharacter\n");
    printf("***************************************\n");
    for(i= 0; i <=127; i++)
    {
        printf("%d\t%c\n",i,i);
    }
    printf("***************************************\n");
}

int main()
{
    DisplayTable();
    
    return 0;
}
