///////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is alphabet or not
//(A-Z a-z).
//Input : F
//Output : TRUE
//Input : &
//Output : FALSE
///////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool Alphabate(char ch)
{
	if(ch>=65 && ch<=90 || ch>=97 && ch<=112)
	{
		return true;
	}
	else
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
		printf("Charecter is alphabate\n");
	}
	else
	{
		printf("Charecter is Not alphabate\n");
	}

	return 0;
}