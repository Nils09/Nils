/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the Program
    Step 5 : Test the program
 */

// Write a program which accepts 2 values from user and perform the addition.

/*
    Algorithm
 
    Start
        Accept first number as no1
        Accept second number as no2
        Create one variable as Ans
        Permorm the addition of no1 & no2
        Store the addition in Ans
        Return the value of Ans
    Stop
 */

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :         Addition
//  Description :               It is used to perform addition of 2 numbers
//  Input Arguments :       Integer, Integer
//  Output :                     Integer
//  Author :                     Piyush Manohar Khairnar
//  Date :                        24/08/2021
//
///////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

// Entry point function : main()

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    
    iRet = Addition(iValue1,iValue2);
    
    printf("Addition of 2 numbers is : %d\n",iRet);

    return 0;
}
