/////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user check whether that numbers contains 11 in
//it or not.
//Input : N : 6
//
//Elements :85 66 11 80 93 88
//
//Output : 11 is present
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool DiffranceEvenOdd(int Arr[],int iNo)
{
	int iCnt=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			return true;
		}

	}
	return false;
}

int main()
{
	int iCnt=0,iSize=0;
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

	iRet=DiffranceEvenOdd(ptr,iSize);

	if(iRet==true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is Not present");
	}

	free(ptr);

	return 0;
}
