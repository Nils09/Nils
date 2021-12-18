//////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept range from user and return addition of all even
//  numbers in between that range. (Range should contains positive numbers only)
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumEven(int iNo1, int iNo2)
{
	int iSum=0;
	if(iNo1>iNo2)
	{
		
		return 0;
	}
	if(iNo1<0 || iNo2<0)
	{
		
		return 0;
	}

	for(iNo1; iNo1<=iNo2; iNo1++)
	{
		if(iNo1%2==0)
		{
			iSum=iSum+iNo1;
		}
	}
	return iSum;
}

int main()
{
	int iValue1=0, iValue2=0, iRet=0;

	printf("Enter the first no : \n");
	scanf("%d",&iValue1);

	printf("Enter the second no : \n");
	scanf("%d",&iValue2);

	iRet=SumEven(iValue1,iValue2);

	if(iRet != 0)
	{
		printf("Sum of Even No is : %d",iRet);
    }
    else
    {
    	printf("INVALID RANGE");	
    }
	return 0;
}