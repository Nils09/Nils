///////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept area in square feet and convert it into square
// meter. (1 square feet = 0.0929 Square meter)
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SQMeter(int iNo)
{
	double dSqm=0.00;

	dSqm=iNo*0.0929;

	return dSqm;
}
int main()
{
	int iValue=0;
	double bRet=0.00;

	printf("Enter Area in aqure feet : \n");
	scanf("%d",&iValue);

	bRet=SQMeter(iValue);

	printf("Area in Squer meter is: %lf",bRet);

	return 0;
}