///////////////////////////////////////////////////////////////////////////////////////
//
//Write a program which accept one number from user and off 7th and 10th
//bit of that number. Return modified number.
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT CheckBit(UINT iValue)
{
	UINT iMask=0x00000240;
	UINT iResult=iMask & iValue;

	
	return iResult;

}

int main()
{
	UINT iNo=0;
	UINT bRet=0;

	cout<<"Enter the No \n";
	cin>>iNo;

	bRet=CheckBit(iNo);

	cout<<"Modified No is : "<<bRet;

	

	return 0;
}
