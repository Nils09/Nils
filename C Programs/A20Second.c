/////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is capital or not
//(A-Z).
//Input : F
//Output : TRUE
//Input : d
//Output : FALSE
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Alphabate(char ch)
{
	if(ch>=65 && ch<=90)
	{
		return true;
	}
	else if(ch>=97 && ch<=112)
	{
		return false;
	}
}


int main()
{
	char ch='\0';
	bool iRet=false;

	printf("Enter the Charecter\n");
	scanf("%c",&ch);

	iRet=Alphabate(ch);

	if(iRet==true)
	{
		printf("Charecter is Chapital\n");
	}
	else
	{
		printf("Charecter is Small\n");
	}

	return 0;
}