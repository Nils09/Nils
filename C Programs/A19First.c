///////////////////////////////////////////////////////////////
//Accept N numbers from user and return the largest number.
//Input : N : 6
//
//Elements :85 66 3 66 93 88
//
//Output : 93
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[],int iNo)
{
	int iCnt=0,iLarg=1;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]>iLarg)
		{
			iLarg=Arr[iCnt];
		}

	}	
	return iLarg;
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

	iRet=Largest(ptr,iSize);

	printf("Large no is : %d ",iRet);

	free(ptr);

	return 0;
}
