////////////////////////////////////////////////////////////////
//Accept N numbers from user and return the smallest number.
//Input : N : 6
//
//Elements :85 66 3 66 93 88
//
//Output : 3
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Smallest(int Arr[],int iNo)
{
	int iCnt=0,iSmall=Arr[iCnt];

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]<iSmall)
		{
			iSmall=Arr[iCnt];
		}

	}	
	return iSmall;
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

	iRet=Smallest(ptr,iSize);

	printf("Smallest no is : %d ",iRet);

	free(ptr);

	return 0;
}
