////////////////////////////////////////////////////////////////////
//
//Write a program which checks whether 15th bit is On or OFF.
//
////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iValue)
{
	UINT iMask=0x00004000;
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
		cout<<"15th Bit is ON";
	}
	else
	{
		cout<<"15th Bit is OFF";
	}

	return 0;
}