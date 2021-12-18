/////////////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below pattern.
//  Input : iRow = 4 iCol = 5
//  Output : 4 4 4 4 4
//           3 3 3 3 3
//           2 2 2 2 2
//           1 1 1 1 1
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCntR=0,iCntC=0;

	for(iCntR=iRow; iCntR>=1; iCntR--)
	{
		for(iCntC=1; iCntC<=iCol; iCntC++)
		{
			printf("%d\t",iCntR);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Row :\n");
	scanf("%d",&iValue1);

	printf("Enter Columns :\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}

