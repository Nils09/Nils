/////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return difference between frequency of
//even number and odd numbers.
//Input : N : 7
//
//Elements :85 66 3 80 93 88 90
//
//Output : 1 (4 -3)
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DiffranceEvenOdd(int Arr[],int iNo)
{
	int iCnt=0,iCntEven=0,iCntOdd=0,iChack=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iCntEven++;
		}
		else
		{
			iCntOdd++;
		}

	}

	iChack=iCntEven-iCntOdd;
	return iChack;
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

	iRet=DiffranceEvenOdd(ptr,iSize);

	printf("Diffrence between Frequancy of even and odd no is : %d",iRet);

	free(ptr);

	return 0;
}
