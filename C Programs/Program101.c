#include <stdio.h>

void Display(char *Brr)
{
    printf("Name is %s\n",Brr);
}

int main()
{
    char Arr[10];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);     // 50
    
    Display(Arr);   // Display(50);     Name of array is internally considered as its base address
    
    return 0;
}
