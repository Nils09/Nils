////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept number from user and return the count of even digits.
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
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

	printf("Enter the no:\n");
	scanf("%d",&iValue);

	iRet=CountEven(iValue);

	printf("Coun of Even no is : %d",iRet);

	return 0;
}

