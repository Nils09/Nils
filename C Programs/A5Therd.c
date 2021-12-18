/////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and count frequency of 2 in it.
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CoutTwo(int iNo)
{
	int iCnt=0,iDigit=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0, iRet=0;

	printf("Enter the No:\n");
	scanf("%d",&iValue);

	iRet=CoutTwo(iValue);

	printf("Frequancy of 2 is : %d",iRet);

	return 0;
}