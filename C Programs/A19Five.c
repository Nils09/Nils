//////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display summation of digits of each
//number.
//Input : N : 6
//
//Elements :8225 665 3 76 953 858
//
//Output : 17 17 3 13 17 21
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ContentSum(int Arr[],int iNo)
{
	int iCnt=0,iCnt2=0,iValue=0,iSum=0,iValue2=0;

	printf("Content 3 Digit Elemnt is :\n");
	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		iValue=Arr[iCnt];
		iValue2=0;
		while(iValue>0)
		{
			iValue2=iValue%10;
			iSum=iSum+iValue2;
			iValue=iValue/10;
		}
		printf("%d\n",iSum);
	}	

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

	ContentSum(ptr,iSize);

	free(ptr);

	return 0;
}
