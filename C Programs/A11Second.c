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
	char ch1='\0',ch2='\0';

	for(iCntR=1; iCntR<=iRow; iCntR++)
	{
		for(iCntC=1,ch1='A',ch2='a'; iCntC<=iCol; iCntC++,ch1++,ch2++)
		{
			if(iCntR%2==0)
			{
				printf("%c\t",ch2);
			}
			else
			{
				printf("%c\t",ch1);
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