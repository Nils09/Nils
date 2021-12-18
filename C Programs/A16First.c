///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Accept N numbers from user and return difference between summation
//  of even elements and summation of odd elements.
//  Input : N : 6
//  Elements :85 66 3 80 93 88
//  Output : 53 (234 - 181)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iNo)
{
	int iCnt=0, ESum=0, OSum=0, iDiff=0;

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			ESum=ESum+Arr[iCnt];
		}
		else
		{
			OSum=OSum+Arr[iCnt];
		}
	}

	iDiff=ESum-OSum;

	return iDiff;

}

int main()
{
	int iCnt=0, iSize=0, iRet=0;
	int *p=NULL;

	printf("Enter No of element\n");
	scanf("%d",&iSize);

	p = (int*)malloc(sizeof(int)*iSize);

	if(p==NULL)
	{
		printf("UNEBLE to locate Memory\n");
		return -1
	}

	printf("Enter The Element\n");

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Difference(p,iSize);

	printf("Deffrance between Odd and Even is %d",iRet);

	free(p);

	return 0;

}