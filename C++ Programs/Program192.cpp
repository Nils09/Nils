#include<iostream>
using namespace std;

typedef unsigned int UINT;

/*
    op1      op2     &       |       ^
    1           0       0       1       1
    0           1       0       1       1
    1           1       1       1       0
    0           0       0       0       0
 */

// position = 5     7

// iMask                0   1   0   1   0   0   0   0

//  Input               0   1   1   0   0   1   0   0
//  iMask               0   1   0   1   0   0   0   0       ^
//--------------------------------------------------------
//  Output              0  0   1   1   0   1   0   0

int ToggleBit(int iNo, int iPos1, int  iPos2)
{
    int iMask1 = 0x00000001, iMask2 = 0x00000001, iMask = 0;
    int iResult = 0;
    
    iMask1 = iMask1 << (iPos1-1);
    iMask2 = iMask2 << (iPos2-1);
    
    iMask = iMask1 | iMask2;
    
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0, i = 0,j = 0;
    
    cout<<"Enter number\n";
    cin>>iValue;
    
    cout<<"Enter the first position of bit\n";
    cin>>i;
    cout<<"Enter the second position of bit\n";
    cin>>j;

    iRet = ToggleBit(iValue,i,j);
    
    cout<<"Updated number is : "<<iRet<<"\n";
    return 0;
}
