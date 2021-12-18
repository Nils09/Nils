///////////////////////////////////////////////////////////////////////////////
//Accept character from user. If it is capital then display all the
//characters from the input characters till Z. If input character is small
//then print all the characters in reverse order till a. In other cases
//return directly.
//Input : Q
//Output : Q R S T U V W X Y Z
//Input : m
//Output : m l k j i h g f e d c b a
//Input : 8
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayCharecter(char ch)
{

	if(ch>=65 && ch<=90)
	{
		for(ch; ch<=90; ch++)
		{
			printf("%c\t",ch);
		}	
	}
	else if(ch>=97 && ch<=122)
	{
		for(ch; ch>=97; ch--)
		{
			printf("%c\t",ch);
		}
	}
	else
	{
		printf("Charecter is not alphabate\n");
	}
}

int main()
{
	char ch='\0',cRet='\0';

	printf("Enter the Charecter\n");
	scanf("%c",&ch);

	DisplayCharecter(ch);

	return 0;

}