#include<stdio.h>

int Addition(int no1,  int no2)
{
    return no1 + no2;
}
int main()
{
    int x, y, z;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    z = Addition(x,y);
    printf("Addition is : %d\n",z);
    return 0;
}
