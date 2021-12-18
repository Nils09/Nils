////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept distance in kilometre and convert it into meter. (1
//  kilometre = 1000 Meter)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ConMeter(int iNo)
{
	int iMeter=1000,iCon=0;

	iCon=iNo*iMeter;

	return iCon;

}
int main()
{
	int iValue=0, iRet=0;

	printf("Enter the Kilomiter :\n");
	scanf("%d",&iValue);

	iRet=ConMeter(iValue);

	printf("Conversion is : %d Meter",iRet);

	return 0;
}