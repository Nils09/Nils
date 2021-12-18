///////////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and accept one another number as NO ,
//check whether NO is present or not.
//
//Input : N : 6
//NO: 66
//Elements :85 66 3 66 93 88
//
//Output : TRUE
//Input : N : 6
//NO: 12
//Elements :85 11 3 15 11 111
//
//Output : FALSE
///////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool DiffranceEvenOdd(int Arr[],int iNo,int iValue)
{
	int iCnt=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]==iValue)
		{
			return true;
		}

	}
	return false;
}

int main()
{
	int iCnt=0,iSize=0,iValue=0;
	bool iRet=false;
	int *ptr=NULL;

	printf("Enter the No of Element\n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(sizeof(int)*iSize);

	if(ptr==NULL)
	{
		printf("UNABLE TO LOCATE MEMORY\n");
		return -1;
	}

	printf("Enter the Elment\n");

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the Find no\n");
	scanf("%d",&iValue);

	iRet=DiffranceEvenOdd(ptr,iSize,iValue);

	if(iRet==true)
	{
		printf("NO is present");
	}
	else
	{
		printf("No is Not present");
	}

	free(ptr);

	return 0;
}
