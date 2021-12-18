////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is digit or not
//(0-9).
//Input : 7
//Output : TRUE
//Input : d
//Output : FALSE
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Digit(char ch)
{
	if(ch>=48 && ch<=57)
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

	printf("Enter the Digit\n");
	scanf("%c",&ch);

	iRet=Digit(ch);

	if(iRet==true)
	{
		printf("Charecter is Digit\n");
	}
	else
	{
		printf("Charecter is Not Digit\n");
	}

	return 0;
}