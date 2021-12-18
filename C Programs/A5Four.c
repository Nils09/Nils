///////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and count frequency of 4 in it.
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CoutFour(int iNo)
{
	int iDigit=0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the No\n");
	scanf("%d",&iValue);

	iRet=CoutFour(iValue);

	printf("Count of Four is : %d",iRet);

	return 0;
}
