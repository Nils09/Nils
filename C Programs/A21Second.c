//////////////////////////////////////////////////////////////////////////////////
//Accept character from user. If character is small display its
//corresponding capital character, and if it small then display its
//corresponding capital. In other cases display as it is.
//Input : Q
//Output : q
//Input : m
//Output : M
//Input : 4
//Output : 4
//Input : %
//Output : %
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

char Carsponding(char ch)
{
	if(ch>=65 && ch<=90)
	{
		ch=ch+32;
		return ch;	
	}
	else if(ch>=97 && ch<=122)
	{
		ch=ch-32;
	}
	else
	{
		return ch;
	}
}

int main()
{
	char ch='\0',cRet='\0';

	printf("Enter the Charecter\n");
	scanf("%c",&ch);

	cRet=Carsponding(ch);

	printf("Carsponding No is :");
	printf("%c",cRet);

	return 0;

}