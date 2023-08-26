#include<stdio.h>

void SimpleIntrest()
{
	int p=0,r=0,t=0,si=0;
	
	printf("Enter the Principle Amount : ");
	scanf("%d",&p);

	printf("Enter the rate of Intrest : ");
	scanf("%d",&r);

	printf("Enter the Time in Years :");
	scanf("%d",&t);

	si=(p*t*r)/100;

	printf("Simple Intrest is : Rs.%d",si);
}

void Principle()
{
	int p=0,r=0,t=0,si=0;
	
	printf("Enter the SimpleIntrest : ");
	scanf("%d",&si);

	printf("Enter the rate of Intrest : ");
	scanf("%d",&r);

	printf("Enter the Time in Years :");
	scanf("%d",&t);

	p=(100*si)/(r*t);

	printf("Simple Principle Amount is : Rs.%d",si);
}

void Roi()
{
	int p=0,r=0,t=0,si=0;
	
	printf("Enter the Principle Amount : ");
	scanf("%d",&p);

	printf("Enter the SimpleIntrest : ");
	scanf("%d",&si);

	printf("Enter the Time in Years :");
	scanf("%d",&t);

	r=(100*si)/(p*t);

	printf("rate of Intrest is : %d",r);
}

void Time()
{
	int p=0,r=0,t=0,si=0;
	
	printf("Enter the Principle Amount : ");
	scanf("%d",&p);

	printf("Enter the rate of Intrest : ");
	scanf("%d",&r);

	printf("Enter the Simple Intrest :");
	scanf("%d",&si);

	t=(100*si)/(p*r);

	printf("Simple Intrest is : Rs.%d",t);
}

int main()
{
	int icnt=0;

	printf("Press 1  For Simple Intrest \n");
	printf("Press 2  For Principle \n");
	printf("Press 3  For Rate Of Intrest \n");
	printf("Press 4  For Time \n");

	scanf("%d",&icnt);

	switch(icnt)
	{
	case 1:
		SimpleIntrest();
		break;
	case 2:
		Principle();
		break;
	case 3:
		Roi();
		break;
	case 4:
		Time();
		break;
	default :
		printf("Enter the Valid No \n");
		break;
	}
	return 0;
}