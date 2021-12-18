#include<iostream>
using namespace std;

typedef unsigned int UINT;

void DisplayByte(UINT iNo)
{
    UINT Byte1 = iNo & 0x000000FF;
    
    UINT Byte2 = iNo & 0x0000FF00;
    Byte2 = Byte2 >> 8;
    
    UINT Byte3 = iNo & 0x00FF0000;
    Byte3 = Byte3 >> 16;
    
    UINT Byte4 = iNo & 0XFF000000;
    Byte4 = Byte4 >> 24;
    
    cout<<"Byte1 = "<<Byte1<<"\n";
    cout<<"Byte2 = "<<Byte2<<"\n";
    cout<<"Byte3 = "<<Byte3<<"\n";
    cout<<"Byte4 = "<<Byte4<<"\n";
    
}

int main()
{
    UINT iValue = 0, iRet = 0, i , j;
    
    cout<<"Enter number\n";
    cin>>iValue;

    DisplayByte(iValue);
    
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
