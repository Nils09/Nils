//////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is small case or
//not (a-z).
//Input : g
//Output : TRUE
//Input : D
//Output : FALSE
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool SmallCase(char ch)
{
	if(ch>=97 && ch<=122)
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

	printf("Enter the Character\n");
	scanf("%c",&ch);

	iRet=SmallCase(ch);

	if(iRet==true)
	{
		printf("Charecter is Small Case\n");
	}
	else
	{
		printf("Charecter is Not Small Case\n");
	}

	return 0;
}