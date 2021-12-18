///////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and accept Range, Display all elements from
//that range
//Input : N : 6
//Start: 60
//End : 90
//Elements :85 66 3 76 93 88
//
//Output : 66 76 88
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DiffranceEvenOdd(int Arr[],int iNo,int iStart,int iEnd)
{
	int iCnt=0;

	printf("Element of that range");

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt] >= iStart && Arr[iCnt]<=iEnd)
		{
			printf("%d\t",Arr[iCnt]);
		}

	}	
}

int main()
{
	int iCnt=0,iSize=0,iStart=0,iEnd=0;
	int iRet=0;
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

	printf("Enter the First no of range\n");
	scanf("%d",&iStart);

	printf("Enter the last no of range\n");
	scanf("%d",&iEnd);

	DiffranceEvenOdd(ptr,iSize,iStart,iEnd);

	free(ptr);

	return 0;
}
