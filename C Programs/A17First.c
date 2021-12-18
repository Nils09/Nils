////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return frequency of even numbers.
//Input : N : 6
//
//Elements :85 66 3 80 93 88
//
//Output : 3
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CntEven(int Arr[],int iNo)
{
	int iCnt=0,iCntEven=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iCntEven++;
		}
	}
	return iCntEven;
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

	iRet=CntEven(ptr,iSize);

	printf("Count of even no is : %d",iRet);

	free(ptr);

	return 0;
}
