#include <stdio.h>

void Display(char Brr[])
{
    printf("Name is %s\n",Brr);
}

int main()
{
    char Arr[50];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);     // 50
    
    Display(Arr);
    
    return 0;
}
