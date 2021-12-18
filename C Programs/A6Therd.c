//////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return the count of digits in
// between 3 and 7.
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDigit(int iNo)
{
	int iDigit=0,iCnt=0;

	if(iNo<0)
	{
		iNo = -iNo; 
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>3 && iDigit<7)
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

	printf("Enter the no :\n");
	scanf("%d",&iValue);

	iRet=CountDigit(iValue);

	printf("Count of digit in between 3 and 7 is : %d",iRet);

	return 0;

}