#include<stdio.h>

int Maximum(int no1, int no2)
{
	int iMax=0;

	if(no1>no2)
	{
		iMax=no1;
	}
	else
	{
		iMax=no2;
	}

	return iMax;
}

int main()
{
	int iNo1=0,iNo2=0,iAns=0;

	printf("Enter the two No : ");
	scanf("%d %d",&iNo1,&iNo2);

	iAns=Maximum(iNo1,iNo2);

	printf("The Maximum No is : %d",iAns);
}