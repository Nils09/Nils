///////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return frequency of 11 form it.
//Input : N : 6
//
//Elements :85 66 3 15 93 88
//
//Output : 0
//Input : N : 6
//
//Elements :85 11 3 15 11 111
//
//Output : 2
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int iNo)
{
	int iCnt=0,iCount=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
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

	iRet=frequency(ptr,iSize);

	printf("Frequancy of 11 is : %d",iRet);

	free(ptr);

	return 0;
}