//////////////////////////////////////////////////////////////////////
//Write a program which displays ASCII table. Table contains symbol,
//Decimal, Hexadecimal and Octal representation of every member from
//0 to 255.
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayASCII()
{
	int iCnt1=0,iCnt2=255;
	printf("     Decimal     |  Hexadecimal  |    Octal      |      Symbol   |\n");
	for(iCnt1=0; iCnt1<iCnt2; iCnt1++)
	{
		printf("| \t%d\t | \t%x\t | \t%o\t | \t%c\t |\n",iCnt1,iCnt1,iCnt1,iCnt1);
	}
}


int main()
{
	DisplayASCII();
}