//////////////////////////////////////////////////////////////////////////////////
//Accept N numbers from user and display all such elements which are
//multiples of 11.
//Input : N : 6
//
//Elements :85 66 3 55 93 88
//
//Output : 66 55 88
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iNo)
{
	int iCnt=0;

	printf("Element which are multiples of 11 is :\n");

	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iCnt=0,iSize=0;
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

	Display(ptr,iSize);

	free(ptr);

	return 0;
}
