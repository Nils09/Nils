////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
// 2 4 6 8 10 12 14 16
//
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("%d ",iCnt*2);
	}
}

int main()
{
	int iValue=0;

	printf("Enter the no :\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;	
}