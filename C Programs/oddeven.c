// discribe the odd even 

#include<stdio.h>

int main()
{
    int ino=0;
    printf("enter the no:-");
    scanf("%d",&ino);

    if(ino%2==0)
    {
        printf("the %d is even",ino);
    }
    else
    {
        printf("the %d is odd",ino);
    }
    return 0;

}