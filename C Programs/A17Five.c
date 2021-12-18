//////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and accept one another number as NO ,
//return frequency of NO form it.
//NO: 66
//Elements :85 66 3 66 93 88
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int iNo, int iNo2)
{
	int iCnt=0,iCount=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]==iNo2)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iCnt=0,iSize=0,iNo=0,iRet=0;
	int *ptr=NULL;

	printf("Enter the No of Element\n");
	scanf("%d",&iSize);

	printf("Enter the no to find Frequancy\n");
	scanf("%d",&iNo);

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

	iRet=frequency(ptr,iSize,iNo);

	printf("Frequancy of %d is : %d",iNo,iRet);

	free(ptr);

	return 0;
}