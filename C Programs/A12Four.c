/////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below pattern.
//  Input : iRow = 6 iCol = 5
//  Output : * * * * *
//           * @ @ @ *
//           * @ @ @ *
//           * @ @ @ * 
//           * @ @ @ *
//           * * * * * 
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCntR=0,iCntC=0;
	

	for(iCntR=1; iCntR<=iRow; iCntR++)
	{
		for(iCntC=1; iCntC<=iCol; iCntC++)
		{
			if(iCntC==1 || iCntC==iCol)
			{
				printf("*\t");
			}
			else if(iCntR==1 || iCntR==iRow)
			{
				printf("*\t");
			}
			else
			{
				printf("@\t");
			}
			
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