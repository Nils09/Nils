#include<stdio.h>

int Maximum(int no1, int no2)
{
	int max;

	if(no1>no2)
	{
		max=no1;
	}
	else
	{
		max=no2;
	}

	return max;
}

int Minimum(int no1, int no2)
{
	int min=0;

	if(no1<no2)
	{
		min=no1;
	}
	else
	{
		min=no2;
	}
	return min;
}

int main()
{
	int i=0,j=0,ans=0;

	printf("Enter the two no : \n");
	scanf("%d%d",&i,&j);

	ans=Maximum(i,j);
	printf("Maximum no is :%d \n",ans);

	ans=Minimum(i,j);
	printf("Minimum no is :%d \n",ans);

	return 0;

}