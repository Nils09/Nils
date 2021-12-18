////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iValue)
{
	int iCnt=0;
	char iChar='A';

	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		printf(" %c ",iChar);

		iChar++;
	}
}


int main()
{
	int iValue=0;

	printf("Enter the No :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
} 