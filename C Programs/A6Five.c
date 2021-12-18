////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return difference between
// summation of even digits and summation of odd digits.
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)
{
	int iDigit=0, iSumEven=0, iSumOdd=0, iDiff=0;

	if(iNo<0)
	{
		iNo = -iNo; 
	} 

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		if(iDigit%2 != 0)
		{
			iSumOdd=iSumOdd+iDigit;
		}
		iNo=iNo/10;
	}
	iDiff=iSumEven-iSumOdd; 
	return iDiff;
}
int main()
{
	int iValue=0,iRet=0;

	printf("Enter the no :\n");
	scanf("%d",&iValue);

	iRet=Mult(iValue);

	printf("Multiplication of all Digits is : %d",iRet);

	return 0;
}