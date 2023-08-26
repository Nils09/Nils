#include<stdio.h>

int main()
{
	int iNo1=0,iNo2=0,iMax=0;

	printf("Enter the two No : ");
	scanf("%d %d",&iNo1,&iNo2);

	if(iNo1>iNo2)
	{
		iMax=iNo1;
	}
	else
	{
		iMax=iNo2;
	}

	printf("The Maximum No is : %d",iMax);

	return 0;
}