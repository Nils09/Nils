#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT SwapByte(UINT iNo)
{
    return (iNo & 0x00FFFF00) | (iNo << 24) | (iNo >> 24);
}

int main()
{
    UINT iValue = 0, iRet = 0, i , j;
    
    cout<<"Enter number\n";
    cin>>iValue;

    iRet = SwapByte(iValue);
    cout<<"Data is : "<< iRet<<"\n";
    return 0;
}





/*
 
 ABCD
 
 // Step 1
 000D
 
 // Step2
 00C0
 000C
 
 // Step3
 0B00
 000B
 
 // Step 4
 A000
 0000A
 
 
 */
