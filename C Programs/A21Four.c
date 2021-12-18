////////////////////////////////////////////////////////////////////////////////
//Accept Character from user and check whether it is special symbol
//or not (!, @, #, $, %, ^, &, *).
//Input : %
//Output : TRUE
//Input : d
//Output : FALSE
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool Carsponding(char ch)
{
	if(ch>=33 && ch<=42)
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
	bool bRet=false;

	printf("Enter the Symbol\n");
	scanf("%c",&ch);

	bRet=Carsponding(ch);

	if(bRet==true)
	{
		printf("This is Spacial SYMBOL\n");
	}
	else
	{
		printf("This is NOT Spacial SYMBOL\n");
	}

	return 0;

}