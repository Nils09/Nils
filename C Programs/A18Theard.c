///////////////////////////////////////////////////////////////////////
//Accept N numbers from user and accept one another number as NO ,
//return index of last occurrence of that NO.
//
//Input : N : 6
//NO: 66
//Elements :85 66 3 66 93 88
//
//Output : 3
//Input : N : 6
//NO: 93
//Elements :85 66 3 66 93 88
//
//Output : 4
//Input : N : 6
//NO: 12
//Elements :85 11 3 15 11 111
//
//Output : -1
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int DiffranceEvenOdd(int Arr[],int iNo,int iValue)
{
	int iCnt=(iNo-1);

	while(iCnt!=0)
	{
		if(Arr[iCnt]==iValue)
		{
			return iCnt;
		}
		iCnt--;
	}
	return -1;
	
}

int main()
{
	int iCnt=0,iSize=0,iValue=0;
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

	printf("Enter the Find no\n");
	scanf("%d",&iValue);

	iRet=DiffranceEvenOdd(ptr,iSize,iValue);

	if(iRet==-1)
	{
		printf("NO is Not present\n");
	}
	else
	{
		printf("Index No is :\n %d",iRet);
	}

	free(ptr);

	return 0;
}
