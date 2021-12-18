////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept number from user and count frequency of such a
//  digits which are less than 6.
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFrq(int iNo)
{
	int iCnt=0,iDigit=0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
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

	printf("Enter the No : \n");
	scanf("%d",&iValue);

	iRet=CountFrq(iValue);

	printf("Count of Digits LessThan 6 is : %d",iRet);

	return 0;
}