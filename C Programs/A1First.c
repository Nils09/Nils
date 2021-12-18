///////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept one number from user and print that number of
//  even numbers on screen.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{  
   int iCnt=0, iCnt2=0;   
   if(iNo<=0)
   {
   	return;
   }

   for(iCnt=1; iCnt2<iNo; iCnt++)
   {
   	if(iCnt%2==0)
   	{
   		printf("%d ",iCnt);
   		iCnt2++;
   	}
   }
}

int main()
{
	int iValue =0;
	printf("Enter one no:");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;

}