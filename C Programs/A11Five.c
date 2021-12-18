/////////////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below pattern.
//  Input : iRow = 3 iCol = 4
//  Output : 1 2 3 4 
//           5 6 7 8
//           9 10 11 12
//           
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCntR=0,iCntC=0;
	int iCntl=1;

	for(iCntR=1; iCntR<=iRow; iCntR++)
	{
		for(iCntC=1; iCntC<=iCol; iCntC++)
		{
			printf("%d\t",iCntl);
			iCntl++;
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

