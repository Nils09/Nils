/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept accept range from user and display all numbers in
//  between that range in reverse order.
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
	

	for(iNo2; iNo1<=iNo2; iNo2--)
	{
		printf("%d ",iNo2);
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