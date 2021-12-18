/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept range from user and display all numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
	if(iNo1>iNo2)
	{
		printf("INVALID RANGE");
	}

	for(iNo1; iNo1<=iNo2; iNo1++)
	{
		if(iNo1%2==0)
		{
			printf("%d ",iNo1);
		}
	}
}

int main()
{
	int iValue1=0, iValue2=0;

	printf("Enter the first no : \n");
	scanf("%d",&iValue1);

	printf("Enter the second no : \n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}