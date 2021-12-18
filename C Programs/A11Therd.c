//////////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 5
// Output : A A A A A
//          B B B B B
//          C C C C C
//
//////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below pattern.
//  Input : iRow = 4 iCol = 4
//  Output : A B C D
//           a b c d
//           A B C D
//           a b c d
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCntR=0,iCntC=0;
	char ch='\0';

	for(iCntR=1,ch='A'; iCntR<=iRow; iCntR++,ch++)
	{
		for(iCntC=1; iCntC<=iCol; iCntC++)
		{
			printf("%c\t",ch);
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