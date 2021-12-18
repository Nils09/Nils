#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    int iCnt = 1;
    
    while(iCnt <= iNo)
    {
        cout<<"Marvellous\n";
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt <= iNo)
    {
        cout<<"Marvellous\n";
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int i = 5;
    
    // DisplayI(i);
    
    DisplayR(i);
    
    return 0;
}
