/////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return product of all odd elements.
//Input : N : 6
//
//Elements :15 66 3 70 10 88
//
//Output : 45
//Input : N : 6
//
//Elements :44 66 72 70 10 88
//
//Output : 0
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddElement(int Arr[],int iNo)
{
	int iCnt=0,iMult=1;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%2!=0)
		{
			iMult=iMult*Arr[iCnt];
		}

	}	
	return iMult;
}

int main()
{
	int iCnt=0,iSize=0;
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

	iRet=OddElement(ptr,iSize);

	printf("Product of odd no is : %d ",iRet);

	free(ptr);

	return 0;
}
