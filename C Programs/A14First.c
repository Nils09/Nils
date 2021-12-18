//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Accept number of rows and number of columns from user and display below
//pattern.
//	Input : iRow = 4 iCol = 4
//	Output : *
//			 * *
//			 * * *
//			 * * * *
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iValue1,int iValue2)
{
	int iCnt1=0,iCnt2=0;

	for(iCnt1=1; iCnt1<=iValue1; iCnt1++)
	{
		for(iCnt2=1; iCnt2<=iValue2; iCnt2++)
		{
			if(iCnt1>=iCnt2)
			{	
				printf("*\t");
			}
		}
		printf("\n");
	}

}

int main()
{
	int iRow=0,iCol=0;

	printf("Enter the rew : \n");
	scanf("%d",&iRow);
	printf("Enter the Columns :\n");
	scanf("%d",&iCol);

	Display(iRow,iCol);

	return 0;
}