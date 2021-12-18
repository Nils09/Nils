//////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return multiplication of all digits.
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)
{
	int iDigit=0,iMulti=1;

	if(iNo<0)
	{
		iNo = -iNo; 
	} 

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			iDigit=1;
		}
		iMulti=iMulti*iDigit;
		iNo=iNo/10;
	}
	return iMulti;
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