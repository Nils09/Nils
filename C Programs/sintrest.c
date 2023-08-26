#include<stdio.h>

int main()
{
	int p=0,r=0,t=0,si=0;
	
	printf("Enter the Principle Amount : ");
	scanf("%d",&p);

	printf("Enter the rate of Intrest : ");
	scanf("%d",&r);

	printf("Enter the Time in Years :");
	scanf("%d",&t);

	si=(p*t*r)/100;

	printf("Simple Intrest is : Rs.%d",si);

	return 0;
}