/////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are
//even and divisible by 5.
//Input : N : 6
//
//Elements :85 66 3 80 93 88
//
//Output : 80
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
	int iCnt=0;

	printf("The Element is :\n");

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%2==0 && Arr[iCnt]%5==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0,iCnt=0;
	int *ptr=NULL;

	printf("Enter the no of element\n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(sizeof(int)*iSize);

	if(ptr==NULL)
	{
		printf("Unable to Allocate Memory\n");
		return -1;
	}

	printf("Enter the Element");

	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	Display(ptr,iSize);

	free(ptr);

	return 0;
}