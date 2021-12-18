/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the Program
    Step 5 : Test the program
 */

// Write a program which accepts 1 value from user and return the factorial
// Input : 4
// Output : 24 (1*2*3*4)

/*
    Algorithm
 
    Start
        Accept number as No
        Create varaible as Fact and initialise it with 1
        Create one counter as Cnt and set to 1
        
        Itrate till the counter is less than or equal to the No
            Multiply the Fact with Cnt
            Store the result in Fact
            Increment the counter by 1
        Repeat
 
        Return the value of Fact
    Stop
 */

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         Factorial
//  Description :               It is used to calculate the factorial
//  Input Arguments :       Integer
//  Output :                     Integer
//  Author :                     Piyush Manohar Khairnar
//  Date :                        24/08/2021
//
///////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

// Entry point function : main()

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter  number\n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}
