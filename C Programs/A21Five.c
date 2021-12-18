///////////////////////////////////////////////////////////////////////////
//Accept character from user and display its ASCII value in decimal,
//octal and hexadecimal format.
//Input : A
//Output : Decimal 65
//         Octal 0101
//         Hexadecimal 0X41
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII(char ch)
{
	
	printf("     Decimal     |  Hexadecimal  |    Octal      |      Symbol   |\n");
	
		printf("| \t%d\t | \t%x\t | \t%o\t | \t%c\t |\n",ch,ch,ch,ch);
	
}


int main()
{
	char ch='\0';

	printf("Enter the Character\n");
	scanf("%c",&ch);

	DisplayASCII(ch);
}