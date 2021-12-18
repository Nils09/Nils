////////////////////////////////////////////////////////////////////////////
//
//Write a program which checks whether first and last bit is On or
//OFF. First bit means bit number 1 and last bit means bit number 32.
//
////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iValue)
{
	UINT iMask=0x80000001;
	UINT iResult=iMask & iValue;

	if(iResult!=0)
	{
		return true;
	}
	
	return false;

}

UINT main()
{
	UINT iNo=0;
	bool bRet=false;

	cout<<"Enter the No \n";
	cin>>iNo;

	bRet=CheckBit(iNo);

	if(bRet==true)
	{
		cout<<"Bit is ON";
	}
	else
	{
		cout<<"Bit is OFF";
	}

	return 0;
}
