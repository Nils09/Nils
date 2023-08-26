#include<stdio.h>

int ino1=0,ino2=0;

void Addition()
{
	int ians=0;
	ians=ino1+ino2;
	printf("Addition of two no is : %d",ians);
}

void Substraction()
{
	int ians=0;
	ians=ino1-ino2;
	printf("Substraction of two no is : %d",ians);
}

void Multiplication()
{
	int ians=0;
	ians=ino1*ino2;
	printf("Multiplication of two no is : %d",ians);
}

void Division()
{
	float fans=0.0;
	fans=ino1/ino2;
	printf("Division of two no is : %f",fans);
}

int main()
{
	int cnt=0;

	printf("Enter the Two Numbers : \n");
	scanf("%d%d",&ino1,&ino2);\

	printf("Press 1  For Addition \n");
	printf("Press 2  For Substraction \n");
	printf("Press 3  For Multiplication \n");
	printf("Press 4  For Division \n");

	scanf("%d",&cnt);

	switch(cnt)
	{
	case 1:
		Addition();
		break;
	case 2:
		Substraction();
		break;
	case 3:
		Multiplication();
		break;
	case 4:
		Division();
		break;
	default :
		printf("Enter the Valid No \n");
		break;
	}
	return 0;
}