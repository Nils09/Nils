/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and check whether it contains 0 in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit=0;

	if(iNo == 0)
	{
		return TRUE;
	}

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}
		iNo=iNo/10;
	}
	return FALSE;
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter the no:\n");
	scanf("%d",&iValue);

	bRet=ChkZero(iValue);

	if(bRet==TRUE)
	{
		printf("Number Contains 0 in it");
	}
	else
	{
		printf("Number Not Contaont 0 in it");
	}

	return 0;
}