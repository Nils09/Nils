/////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns from user and display
// below pattern.
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
	int iCnt1=0, iCnt2=0;

	for(iCnt1=1; iCnt1<=iNo1; iCnt1++)
	{
		printf("\n");

		for(iCnt2=1; iCnt2<=iNo2; iCnt2++)
		{
			printf("%d ",iCnt2);
		}			
	}
}

int main()
{
	int iValue1=0, iValue2=0;

	printf("Enter no of rows : \n");
	scanf("%d",&iValue1);

	printf("Enter no of Colums : \n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}