/////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and return the difference between largest
//and smallest number.
//Input : N : 6
//
//Elements :85 66 3 66 93 88
//
//Output : 90 (93 -3)
/////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Diffrance(int Arr[],int iNo)
{
	int iCnt=0,iSmall=Arr[iCnt],iLarg=0,iDiff=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]<iSmall)
		{
			iSmall=Arr[iCnt];
		}
		else if(Arr[iCnt]>iLarg)
		{
			iLarg=Arr[iCnt];
		}

	}	
	return iDiff=iLarg-iSmall;
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

	iRet=Diffrance(ptr,iSize);

	printf("Diffrance betwen Small And large N: %d ",iRet);

	free(ptr);

	return 0;
}
