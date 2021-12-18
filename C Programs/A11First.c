/////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 4 iCol = 4
// Output : A B C D
// A B C D
// A B C D
// A B C D
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCntR=0, iCntC=0;
	char ch='\0';

	for(iCntR=1; iCntR<=iRow; iCntR++)
	{

		for(iCntC=1,ch='A'; iCntC<=iCol; iCntC++,ch++)
		{
			printf("%c\t",ch);

		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0, iValue2=0;

	printf("Enter the Row");
	scanf("%d\n",&iValue1);

	printf("Enter Columns");
	scanf("%d\n",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}