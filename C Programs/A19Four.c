/////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such numbers which contains
//3 digits in it.
//
//Input : N : 6
//Elements :8225 665 3 76 953 858
//Output : 665 953 858
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ContentNumber(int Arr[],int iNo)
{
	int iCnt=0,iCnt2=0,iValue=0,iStoer=0;

	printf("Content 3 Digit Elemnt is :\n");
	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		iValue=Arr[iCnt];
		iCnt2=0;
		while(iValue>0)
		{
			iValue=iValue/10;
			iCnt2++;
		}

		if(iCnt2==3)
		{
			printf("%d\n",Arr[iCnt]);
		}

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

	ContentNumber(ptr,iSize);

	free(ptr);

	return 0;
}
